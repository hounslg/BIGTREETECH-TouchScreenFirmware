#include "Popup.h"
#include "includes.h"

#define X_MAX_CHAR     (LCD_WIDTH / BYTE_WIDTH)
#define MAX_MSG_LINES  4
#define POPUP_MAX_CHAR (X_MAX_CHAR * MAX_MSG_LINES)

static const GUI_RECT singleBtnRect = POPUP_RECT_SINGLE_CONFIRM;
static const GUI_RECT doubleBtnRect[] = {POPUP_RECT_DOUBLE_CONFIRM, POPUP_RECT_DOUBLE_CANCEL};

static BUTTON bottomSingleBtn = {
  // button location                      color before pressed   color after pressed
  POPUP_RECT_SINGLE_CONFIRM, NULL, 5, 1,  DARKGREEN, DARKGREEN,  MAT_LOWWHITE, DARKGREEN, WHITE, DARKGREEN
};

static BUTTON bottomDoubleBtn[] = {
  {POPUP_RECT_DOUBLE_CONFIRM, NULL, 5, 1, DARKGREEN, DARKGREEN,  MAT_LOWWHITE, DARKGREEN, WHITE, DARKGREEN},
  {POPUP_RECT_DOUBLE_CANCEL,  NULL, 5, 1, MAT_RED,     MAT_RED,  MAT_LOWWHITE,   MAT_RED, WHITE,   MAT_RED},
};

static WINDOW window = {
  DIALOG_TYPE_INFO,                                  // default window type
  POPUP_RECT_WINDOW,                                 // rectangle position and size of popup window
  POPUP_TITLE_HEIGHT,                                // height of title bar
  POPUP_BOTTOM_HEIGHT,                               // height of action bar
  2,                                                 // window border width
  POPUP_BORDER_COLOR,                                // window border color
  {POPUP_TITLE_FONT_COLOR, POPUP_TITLE_BG_COLOR},    // title bar font color / background color
  {POPUP_MSG_FONT_COLOR, POPUP_MSG_BG_COLOR},        // message area font color / background color
  {POPUP_ACTION_FONT_COLOR, POPUP_ACTION_BG_COLOR},  // action bar font color / background color
};

static BUTTON * windowButton =  NULL;
static uint16_t buttonNum = 0;

static const GUI_RECT * cur_btn_rect = NULL;
static void (* action_ok)(void) = NULL;
static void (* action_cancel)(void) = NULL;
static void (* action_loop)(void) = NULL;

static bool popup_redraw = false;
static char popup_title[X_MAX_CHAR];
static char popup_msg[POPUP_MAX_CHAR];
static char popup_ok[24];
static char popup_cancel[24];
static DIALOG_TYPE popup_type;

const GUI_RECT * dialogGetDoubleBtnRect(void)
{
  return doubleBtnRect;
}
const BUTTON * dialogGetBottomDoubleBtn(void)
{
  return bottomDoubleBtn;
}

void _setDialogTitleStr(const char * str)
{
  strncpy_no_pad(popup_title, str, sizeof(popup_title));
}

void _setDialogMsgStr(const char * str)
{
  strncpy_no_pad(popup_msg, str, sizeof(popup_msg));
}

const char * getDialogMsgStr(void)
{
  return popup_msg;
}

void _setDialogOkTextStr(const char * str)
{
  strncpy_no_pad(popup_ok, str, sizeof(popup_ok));
}

void _setDialogCancelTextStr(const char * str)
{
  strncpy_no_pad(popup_cancel, str, sizeof(popup_cancel));
}

void _setDialogTitleLabel(int16_t index)
{
  strncpy_no_pad(popup_title, textSelect(index), sizeof(popup_title));
}

void _setDialogMsgLabel(int16_t index)
{
  strncpy_no_pad(popup_msg, textSelect(index), sizeof(popup_msg));
}

void _setDialogOkTextLabel(int16_t index)
{
  strncpy_no_pad(popup_ok, textSelect(index), sizeof(popup_ok));
}

void _setDialogCancelTextLabel(int16_t index)
{
  strncpy_no_pad(popup_cancel, textSelect(index), sizeof(popup_cancel));
}

static void windowReDrawButton(uint8_t position, uint8_t pressed)
{
  if (position >= buttonNum) return;
  if (pressed >= 2) return;
  if (windowButton == NULL) return;
  if (windowButton->context == NULL) return;

  GUI_DrawButton(windowButton + position, pressed);
}

void popupDrawPage(DIALOG_TYPE type, BUTTON * btn, const char * title, const char * context, const char * yes, const char * no)
{
  window.type = type;  // window.type is used by GUI_DrawWindow() function so it must be set before the function invokation
  TS_ReDrawIcon = windowReDrawButton;

  if (btn != NULL)
  {
    buttonNum = 0;
    windowButton = btn;

    if (yes && yes[0])
      windowButton[buttonNum++].context = (uint8_t *) yes;

    if (no && no[0])
      windowButton[buttonNum++].context = (uint8_t *) no;

    // draw a window with buttons bar
    GUI_DrawWindow(&window, (uint8_t *) title, (uint8_t *) context, true);

    for (uint8_t i = 0; i < buttonNum; i++)
    {
      GUI_DrawButton(&windowButton[i], 0);
    }

    setMenuType(MENU_TYPE_DIALOG);
  }
  else
  { // draw a window with no buttons bar
    GUI_DrawWindow(&window, (uint8_t *) title, (uint8_t *) context, false);

    setMenuType(MENU_TYPE_SPLASH);
  }
}

void menuDialog(void)
{
  menuSetTitle(NULL);

  while (MENU_IS(menuDialog))
  {
    uint16_t key_num = KEY_GetValue(buttonNum, cur_btn_rect);

    switch (key_num)
    {
      case KEY_POPUP_CONFIRM:
        CLOSE_MENU();

        if (action_ok != NULL)
          action_ok();
        break;

      case KEY_POPUP_CANCEL:
        CLOSE_MENU();

        if (action_cancel != NULL)
          action_cancel();
        break;

      default:
        break;
    }

    if (action_loop != NULL)
      action_loop();

    loopProcess();
  }
}

/**
 * @brief Show a popup with a message. Set dialog text before calling showDialog
 *
 * @param type the type of the dialog (alert, question, error, etc)
 * @param ok_action pointer to a function to perform if ok is pressed. (pass NULL if no action need to be performed)
 * @param cancel_action pointer to a function to perform if Cancel is pressed.(pass NULL if no action need to be performed)
 * @param loop_action pointer to a function to perform whilst the dialog is active (visible/not answered)
 */
void showDialog(DIALOG_TYPE type, void (* ok_action)(void), void (* cancel_action)(void), void (* loop_action)(void))
{
  if ((infoSettings.mode == MODE_MARLIN) || (infoSettings.mode == MODE_BLOCKED_MARLIN))  // if standard/blocked Marlin mode, then exit
    return;

  popup_redraw = true;
  popup_type = type;

  action_ok = ok_action;
  action_cancel = cancel_action;
  action_loop = loop_action;
}

void loopPopup(void)
{
  // display the last received popup message, overriding previous popup messages, if any
  if (popup_redraw == false)
    return;

  popup_redraw = false;

  LCD_WAKE();

  if (popup_cancel[0])
  {
    popupDrawPage(popup_type, bottomDoubleBtn, popup_title, popup_msg, popup_ok, popup_cancel);

    cur_btn_rect = doubleBtnRect;
  }
  else if (popup_ok[0])  // show only ok button
  {
    popupDrawPage(popup_type, &bottomSingleBtn, popup_title, popup_msg, popup_ok, NULL);

    cur_btn_rect = &singleBtnRect;
  }
  else  // if no button is requested
  {
    // display only a splash screen, avoiding to register the menuDialog handler
    // (the handler needs at least one button to allow to close the dialog box)
    popupDrawPage(popup_type, NULL, popup_title, popup_msg, NULL, NULL);

    return;
  }

  // avoid to nest menuDialog popup type (while a menuNotification popup type can be overridden)
  if (MENU_IS_NOT(menuDialog))
    OPEN_MENU(menuDialog);  // handle the user interaction, then reload the previous menu
}
