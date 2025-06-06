#ifndef _LANGUAGE_ES_H_
#define _LANGUAGE_ES_H_

// config.ini Parameter Settings - Screen Settings and Feature Settings
#define STRING_LANGUAGE               "Español"
#define STRING_COMMAND_CHECKSUM       "Command checksum"
#define STRING_ADVANCED_OK            "Advanced OK"
#define STRING_TX_DELAY               "TX delay"
#define STRING_TX_PREFETCH            "TX prefetch"
#define STRING_EMULATED_M600          "Emulated M600"
#define STRING_EMULATED_M109_M190     "Emulated M109 / M190"
#define STRING_EVENT_LED              "Event LED"
#define STRING_FILE_COMMENT_PARSING   "File comment parsing"
#define STRING_ROTATED_UI             "Rotar"
#define STRING_ACK_NOTIFICATION       "ACK notification style"
#define STRING_FILES_SORT_BY          "Sort files by"
#define STRING_FILES_LIST_MODE        "Files viewer List Mode"
#define STRING_FILENAME_EXTENSION     "Show filename extension"
#define STRING_FAN_SPEED_PERCENTAGE   "Fan Speed As Percentage"
#define STRING_PERSISTENT_INFO        "Persistent Status Info"
#define STRING_TERMINAL_ACK           "Show ACK in Terminal"
#define STRING_SERIAL_ALWAYS_ON       "Serial Always ON"
#define STRING_MARLIN_FULLSCREEN      "Marlin mode in fullscreen"
#define STRING_MARLIN_SHOW_TITLE      "Marlin Mode Title Support"
#define STRING_MARLIN_TYPE            "Marlin Mode Type"
#define STRING_MOVE_SPEED             "Move speed(X Y Z)"
#define STRING_AUTO_LOAD_LEVELING     "Auto Load Leveling"
#define STRING_PROBING_Z_OFFSET       "Probing for Z offset"
#define STRING_Z_STEPPERS_ALIGNMENT   "Z Steppers Auto-Alignment"
#define STRING_PS_AUTO_SHUTDOWN       "Apag. aut."
#define STRING_FIL_RUNOUT             "Filament sensor"
#define STRING_PL_RECOVERY            "Power loss recovery"
#define STRING_PL_RECOVERY_HOME       "Power Loss Recovery Homing"
#define STRING_BTT_MINI_UPS           "BTT UPS Support"
#define STRING_TOUCH_SOUND            "Touch sounds"
#define STRING_TOAST_SOUND            "Toast Notifications"
#define STRING_ALERT_SOUND            "Popups and Alerts"
#define STRING_HEATER_SOUND           "Heater notification"
#define STRING_LCD_BRIGHTNESS         "Brightness"
#define STRING_LCD_IDLE_BRIGHTNESS    "Idle brightness"
#define STRING_LCD_IDLE_TIME          "Idle timeout"
#define STRING_LCD_LOCK_ON_IDLE       "LCD lock on idle"
#define STRING_LED_ALWAYS_ON          "LED always ON"
#define STRING_KNOB_LED_COLOR         "Rotary Knob LED"
#define STRING_KNOB_LED_IDLE          "Rotary Knob LED idle"
#define STRING_START_GCODE_ENABLED    "Start Gcode before print"
#define STRING_END_GCODE_ENABLED      "End Gcode after print"
#define STRING_CANCEL_GCODE_ENABLED   "Cancel Gcode"

// Machine Parameter Settings - Param Title (ordered by gcode)
#define STRING_STEPS_SETTING          "Steps per mm"
#define STRING_FILAMENT_SETTING       "Filament Diameter"
#define STRING_MAXACCELERATION        "Max Acceleration"
#define STRING_MAXFEEDRATE            "Max Feed Rate"
#define STRING_ACCELERATION           "Acceleration"
#define STRING_JERK                   "Jerk"
#define STRING_JUNCTION_DEVIATION     "Junction Deviation"
#define STRING_HOME_OFFSET            "Home Offset"
#define STRING_FWRETRACT              "FW Retraction"
#define STRING_FWRECOVER              "FW Retraction Recover"
#define STRING_RETRACT_AUTO           "Auto Firmware Retract"
#define STRING_HOTEND_OFFSET          "Offset 2nd Nozzle"
#define STRING_HOTEND_PID             "Hotend PID"
#define STRING_BED_PID                "Bed PID"
#define STRING_STEALTH_CHOP           "TMC StealthChop"
#define STRING_INPUT_SHAPING          "Input Shaping"
#define STRING_DELTA_CONFIGURATION    "Delta Configuration"
#define STRING_DELTA_TOWER_ANGLE      "Tower Angle Trim"
#define STRING_DELTA_DIAGONAL_ROD     "Diagonal Rod Trim"
#define STRING_DELTA_ENDSTOP          "Endstop Adjustments"
#define STRING_PROBE_OFFSET           "Sonda Compensar"
#define STRING_LIN_ADVANCE            "Linear Advance"
#define STRING_CURRENT_SETTING        "Driver Current (mA)"
#define STRING_HYBRID_THRESHOLD       "TMC HybridThreshold"
#define STRING_BUMP_SENSITIVITY       "TMC bump sensitivity"
#define STRING_MBL_OFFSET             "MBL Offset"

// Machine Parameter Settings - Param Attributes (ordered by gcode)
#define STRING_PRINT_ACCELERATION     "Print Acceleration"
#define STRING_RETRACT_ACCELERATION   "Retract Acceleration"
#define STRING_TRAVEL_ACCELERATION    "Travel Acceleration"
#define STRING_RETRACT_LENGTH         "Retract length"
#define STRING_RETRACT_SWAP_LENGTH    "Retract swap length"
#define STRING_RETRACT_FEEDRATE       "Retract feedrate"
#define STRING_RETRACT_Z_LIFT         "Z lift on retraction"
#define STRING_RECOVER_LENGTH         "Extra recover length"
#define STRING_SWAP_RECOVER_LENGTH    "Extra recover swap length"
#define STRING_RECOVER_FEEDRATE       "Recover feedrate"
#define STRING_SWAP_RECOVER_FEEDRATE  "Swap recover feedrate"

// Save / Load
#define STRING_SAVE                   "Grabar"
#define STRING_RESTORE                "Restore"
#define STRING_RESET                  "Reset"
#define STRING_EEPROM_SAVE_INFO       "Save printer settings to EEPROM?"
#define STRING_EEPROM_RESTORE_INFO    "Reload settings from EEPROM?"
#define STRING_EEPROM_RESET_INFO      "Reset EEPROM to stock printer settings?"
#define STRING_SETTINGS_SAVE          "Save settings"
#define STRING_SETTINGS_RESTORE       "Restore settings"
#define STRING_SETTINGS_RESET         "Reset default settings"
#define STRING_SETTINGS_RESET_INFO    "Reset all settings to default values?"
#define STRING_SETTINGS_RESET_DONE    "Reset all settings successful.\nplease restart the device."

// Navigation Buttons
#define STRING_PAGE_UP                "Retroceder"
#define STRING_PAGE_DOWN              "Avanzar"
#define STRING_UP                     "Up"
#define STRING_DOWN                   "Down"
#define STRING_NEXT                   "Next"
#define STRING_BACK                   "Volver"

// Value Buttons
#define STRING_INC                    "Aumentar"
#define STRING_DEC                    "Disminur"
#define STRING_LOAD                   "Cargar"
#define STRING_UNLOAD                 "Descargar"
#define STRING_ON                     "ON"
#define STRING_OFF                    "OFF"
#define STRING_AUTO                   "AUTO"
#define STRING_SMART                  "SMART"
#define STRING_SLOW                   "Despacio"
#define STRING_NORMAL                 "Normal"
#define STRING_FAST                   "Rápido"
#define STRING_ZERO                   "Cero"
#define STRING_HALF                   "Mitad"
#define STRING_FULL                   "Todo"
#define STRING_CUSTOM                 "Personalizar"
#define STRING_CLEAR                  "Clear"
#define STRING_DEFAULT                "Default"

// Action Buttons
#define STRING_START                  "Start"
#define STRING_STOP                   "Parar"
#define STRING_PAUSE                  "Pausar"
#define STRING_RESUME                 "Continuar"
#define STRING_INIT                   "Init"
#define STRING_DISCONNECT             "Desconectar"
#define STRING_SHUT_DOWN              "Apagar"
#define STRING_FORCE_SHUT_DOWN        "Forzar Apagado"
#define STRING_EMERGENCYSTOP          "PARADA EMERGENCIA"
#define STRING_PREHEAT                "Precalentar"
#define STRING_PREHEAT_BOTH           "Ambos"
#define STRING_COOLDOWN               "Enfriarse"

// Dialog Buttons
#define STRING_CONFIRM                "Confirmar"
#define STRING_CANCEL                 "Cancelar"
#define STRING_WARNING                "Advertencia"
#define STRING_CONTINUE               "Continuar"
#define STRING_CONFIRMATION           "Are you sure?"

// Process Status
#define STRING_STATUS                 "Status"
#define STRING_READY                  "Preparado"
#define STRING_BUSY                   "Procesamiento ocupado, por favor espere..."
#define STRING_LOADING                "Cargando..."
#define STRING_UNCONNECTED            "¡No hay comunicación con impresora!"
#define STRING_LISTENING              "TFT in Listening Mode!"

// Process Info
#define STRING_INFO                   "Info"
#define STRING_INVALID_VALUE          "Invalid value(s)"
#define STRING_TIMEOUT_REACHED        "Timeout reached!"
#define STRING_DISCONNECT_INFO        "¡Ahora puede controlar la impresora desde su ordenador!"
#define STRING_SHUTTING_DOWN          "Apagando..."
#define STRING_WAIT_TEMP_SHUT_DOWN    "Espere a que la temperatura del hotend sea inferior a %d℃" // Wait for the temperature of hotend to be lower than 50℃
#define STRING_POWER_FAILED           "¿Continuar imprimiendo?"
#define STRING_PROCESS_COMPLETED      "Process completed!"
#define STRING_PROCESS_ABORTED        "Process aborted!"

// TFT Media, Onboard Media, Filament Runout Process Commands / Status / Info
#define STRING_TFT_SD                 "SD TFT"
#define STRING_TFT_SD_INSERTED        "¡Tarjeta insertada"
#define STRING_TFT_SD_REMOVED         "¡Tarjeta extraida"
#define STRING_TFT_SD_NOT_DETECTED    "No SD card detected!"
#define STRING_TFT_SD_READ_ERROR      "¡Error en la tarjeta SD!"
#define STRING_TFT_USB                "Pendrive"
#define STRING_TFT_USB_INSERTED       "¡Pendrive insertado"
#define STRING_TFT_USB_REMOVED        "¡Pendrive extraido"
#define STRING_TFT_USB_NOT_DETECTED   "No USB disk detected!"
#define STRING_TFT_USB_READ_ERROR     "¡Error en el pendrive!"
#define STRING_ONBOARD_SD             "SD Placa"
#define STRING_ONBOARD_USB            "USB Placa"
#define STRING_ONBOARD_SD_READ_ERROR  "¡Error en la tarjeta media de la placa!"
#define STRING_FILAMENT_RUNOUT        "¡Filamento agotado!"

// Steppers, Print, Probe Process Commands / Status / Info
#define STRING_DISABLE_STEPPERS       "Disarm All"
#define STRING_XY_UNLOCK              "Desbloquear XY"

#define STRING_START_PRINT            "Start printing:\n%s?"
#define STRING_STOP_PRINT             "¿Desea parar la impresión?"
#define STRING_IS_PAUSE               "No se puede extruir al imprimir,¿\nPausar la impresión?"
#define STRING_M0_PAUSE               "Paused by M0 command"

#define STRING_TEST                   "Probar"
#define STRING_DEPLOY                 "Desplegar"
#define STRING_STOW                   "Plegar"
#define STRING_REPEAT                 "Repetir"
#define STRING_HS_ON                  "HS: On"
#define STRING_HS_OFF                 "HS: Off"

// Printer Tools
#define STRING_NOZZLE                 "Punta"
#define STRING_BED                    "Cama"
#define STRING_CHAMBER                "Chamber"
#define STRING_FAN                    "Ventilar"

#define STRING_BLTOUCH                "BLTouch"
#define STRING_TOUCHMI                "TouchMi"

// Values
#define STRING_1_DEGREE               "1℃"
#define STRING_5_DEGREE               "5℃"
#define STRING_10_DEGREE              "10℃"

#define STRING_001_MM                 "0.01mm"
#define STRING_01_MM                  "0.1mm"
#define STRING_1_MM                   "1mm"
#define STRING_5_MM                   "5mm"
#define STRING_10_MM                  "10mm"
#define STRING_100_MM                 "100mm"
#define STRING_200_MM                 "200mm"

#define STRING_1_PERCENT              "1%"
#define STRING_5_PERCENT              "5%"
#define STRING_10_PERCENT             "10%"
#define STRING_PERCENT_VALUE          "%d%%"

#define STRING_5_SECONDS              "5 Sec."
#define STRING_10_SECONDS             "10 Sec."
#define STRING_30_SECONDS             "30 Sec."
#define STRING_60_SECONDS             "1 Min."
#define STRING_120_SECONDS            "2 Min."
#define STRING_300_SECONDS            "5 Min."

// Colors
#define STRING_WHITE                  "Blanco"
#define STRING_BLACK                  "Negro"
#define STRING_BLUE                   "Azul"
#define STRING_RED                    "Rojo"
#define STRING_GREEN                  "Verde"
#define STRING_CYAN                   "Cyan"
#define STRING_YELLOW                 "Amarillo"
#define STRING_BROWN                  "Marrón"
#define STRING_GRAY                   "Gris"
#define STRING_ORANGE                 "Orange"
#define STRING_INDIGO                 "Indigo"
#define STRING_VIOLET                 "Violet"
#define STRING_MAGENTA                "Magenta"
#define STRING_PURPLE                 "Purple"
#define STRING_LIME                   "Lime"
#define STRING_DARKBLUE               "DarkBlue"
#define STRING_DARKGREEN              "DarkGreen"
#define STRING_DARKGRAY               "DarkGray"

// Menus
#define STRING_HEAT                   "Calentar"
#define STRING_MOVE                   "Mover"
#define STRING_HOME                   "Origen"
#define STRING_PRINT                  "Imprimir"
#define STRING_EXTRUDE                "Extruir"
#define STRING_SETTINGS               "Configurar"
#define STRING_SCREEN_SETTINGS        "Pantalla"
#define STRING_UI_SETTINGS            "UI"
#define STRING_SOUND                  "Sound"
#define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
#define STRING_MACHINE_SETTINGS       "Máquina"
#define STRING_PARAMETER_SETTINGS     "Parámetro"
#define STRING_FEATURE_SETTINGS       "Añadidos"
#define STRING_CONNECTION_SETTINGS    "Connection"
#define STRING_SERIAL_PORTS           "S. Ports"
#define STRING_BAUDRATE               "BaudRate"
#define STRING_EEPROM_SETTINGS        "EEPROM"
#define STRING_RGB_SETTINGS           "Color LED"
#define STRING_RGB_OFF                "Apagar LED"
#define STRING_TERMINAL               "Terminal"
#define STRING_LEVELING               "Nivelar"
#define STRING_POINT_1                "Punto 1"
#define STRING_POINT_2                "Punto 2"
#define STRING_POINT_3                "Punto 3"
#define STRING_POINT_4                "Punto 4"
#define STRING_POINT_5                "Punto 5"
#define STRING_BED_LEVELING           "Bed Level"
#define STRING_BL_COMPLETE            "Bed Leveling Complete"
#define STRING_BL_SMART_FILL          "Missing probe points have been smart filled.\n\nNote: remember to save!"
#define STRING_BL_ENABLE              "BL: on"
#define STRING_BL_DISABLE             "BL: off"
#define STRING_ABL                    "ABL"
#define STRING_BBL                    "BBL"
#define STRING_UBL                    "UBL"
#define STRING_MBL                    "MBL"
#define STRING_MBL_SETTINGS           "Mesh Bed Leveling"
#define STRING_ABL_SETTINGS           "Auto Bed Leveling"
#define STRING_ABL_SETTINGS_BBL       "Bilinear Bed Leveling"
#define STRING_ABL_SETTINGS_UBL       "Unified Bed Leveling"
#define STRING_ABL_SETTINGS_UBL_SAVE  "Save to slot"
#define STRING_ABL_SETTINGS_UBL_LOAD  "Load from slot"
#define STRING_ABL_SLOT0              "Slot 0"
#define STRING_ABL_SLOT1              "Slot 1"
#define STRING_ABL_SLOT2              "Slot 2"
#define STRING_ABL_SLOT3              "Slot 3"
#define STRING_ABL_SLOT_EEPROM        "Save the mesh to EEPROM to load after reboot?"
#define STRING_ABL_Z                  "Z Fade"
#define STRING_LEVEL_CORNER           "L corner"
#define STRING_LEVEL_CORNER_INFO      "Edge distance is below probe offset X/Y and some target points could be not reachable.\nDo you want to use a safe edge distance?"
#define STRING_P_OFFSET               "P Offset"
#define STRING_H_OFFSET               "H Offset"
#define STRING_DISTANCE               "Distance"
#define STRING_SHIM                   "Shim"
#define STRING_LOAD_UNLOAD            "Load/Unload"  // needs translation
#define STRING_LOAD_UNLOAD_SHORT      "(Un)Load"  // needs translation
#define STRING_TOUCHSCREEN_ADJUST     "Calibrar"
#define STRING_MORE                   "Más"
#define STRING_SCREEN_INFO            "Informar"
#define STRING_BG_COLOR               "Background color"
#define STRING_FONT_COLOR             "Font color"
#define STRING_PERCENTAGE             "Porcentaje"
#define STRING_PERCENTAGE_SPEED       "Velocidad"
#define STRING_PERCENTAGE_FLOW        "Flujo"
#define STRING_BABYSTEP               "BabyStep"
#define STRING_X_INC                  "+X"
#define STRING_Y_INC                  "+Y"
#define STRING_Z_INC                  "+Z"
#define STRING_X_DEC                  "-X"
#define STRING_Y_DEC                  "-Y"
#define STRING_Z_DEC                  "-Z"
#define STRING_X                      "X"
#define STRING_Y                      "Y"
#define STRING_Z                      "Z"
#define STRING_ADJUST_TITLE           "¡Calibrar la pantalla táctil"
#define STRING_ADJUST_INFO            "Por favor haga clic en el punto rojo"
#define STRING_ADJUST_OK              "Ajuste correcto"
#define STRING_ADJUST_FAILED          "Ajuste fallido, por favor intentelo de nuevo"
#define STRING_UNIFIEDMOVE            "Movimiento"
#define STRING_UNIFIEDHEAT            "Calor/Ventilador"
#define STRING_TOUCH_TO_EXIT          "Toca cualquier lugar para salir"
#define STRING_MAINMENU               "Menu"
#define STRING_TUNING                 "Tuning"
#define STRING_MPC                    "MPC"
#define STRING_MPC_TITLE              "MPC autotune"
#define STRING_MPC_METHOD             "Método:"
#define STRING_PID                    "PID"
#define STRING_PID_TITLE              "PID autotune"
#define STRING_TUNE_START_INFO        "Autotune may take some time to complete.\nContinue?"
#define STRING_TUNE_EXTRUDER          "Tune steps"
#define STRING_TUNE_EXT_EXTRUDE_100   "Ext. 100mm"
#define STRING_TUNE_EXT_TEMP          "Extruder tuning | Heat"
#define STRING_TUNE_EXT_MARK120MM     "Mark 120 mm on your filament.\nPress '%s' when ready.\nMeasure remaining length after extruding."
#define STRING_TUNE_EXT_ADJ_ESTEPS    "Adjust E-Steps"
#define STRING_TUNE_EXT_ESTEPS_SAVED  "New E-steps applied.\nDon't forget to save it in EEPROM.\nNew value: %0.2f"
#define STRING_TUNE_EXT_MEASURED      "Length remaining:"
#define STRING_TUNE_EXT_OLD_ESTEP     "Old e-steps: %0.2f"
#define STRING_TUNE_EXT_NEW_ESTEP     "New e-steps: %0.2f"
#define STRING_NOTIFICATIONS          "Notifications"
#define STRING_MESH_EDITOR            "Mesh edit"
#define STRING_MESH_TUNER             "Mesh tuner"
#define STRING_CASE_LIGHT             "Case light"
#define STRING_LOAD_STARTED           "Loading filament.\nPlease wait for the process to complete."  // translation needed
#define STRING_UNLOAD_STARTED         "Unloading filament.\nPlease wait for the process to complete."  // translation needed
#define STRING_HEATERS_ON             "Some heaters are still ON.\nDo you want to stop them?"  // translation needed
#define STRING_PRINT_FINISHED         "   Print\n   finished"
#define STRING_MAIN_SCREEN            "Main"
#define STRING_PREVIOUS_PRINT_DATA    "Brief"
#define STRING_PRINT_TIME             "Print Time: %02u:%02u:%02u"
#define STRING_FILAMENT_LENGTH        "\nFilament length: %1.2fm"
#define STRING_FILAMENT_WEIGHT        "\nFilament weight: %1.2fg"
#define STRING_FILAMENT_COST          "\nFilament cost: %1.2f"
#define STRING_NO_FILAMENT_STATS      "\nFilament data not available."
#define STRING_CLICK_FOR_MORE         "Click for summary"
#define STRING_EXT_TEMPLOW            "Hotend temperature is below minimum temperature (%d℃)."
#define STRING_HEAT_HOTEND            "Heat hotend to %d℃?"
#define STRING_DESIRED_TEMPLOW        "Hotend temperature is below\ndesired temperature (%d℃)."
#define STRING_WAIT_HEAT_UP           "Wait for it to heat up."
#define STRING_Z_ALIGN                "Z Align"
#define STRING_MACROS                 "Macros"
#define STRING_MESH_VALID             "Mesh Validation"
#define STRING_CONNECT_PROBE          "Connect probe before starting the process. Make sure to disconnect it afterwards."
#define STRING_DISCONNECT_PROBE       "Make sure you have disconnected probe before using this feature."
#define STRING_CALIBRATION            "Calibrate"

#endif
