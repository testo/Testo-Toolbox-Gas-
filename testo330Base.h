
#ifndef TESTO330BASE_H
#define TESTO330BASE_H

#ifdef ZIV330
   #define TESTO330BASE_EXPORT
#else
   #ifdef MAKE_TESTO330BASE
      #define TESTO330BASE_EXPORT __declspec( dllexport )
   #else
      #define TESTO330BASE_EXPORT __declspec( dllimport )
   #endif
#endif

class CLogging;

#define TESTO330BASE_NOERROR          0  // OK, no error
#define TESTO330BASE_INVALIDHANDLE    1  // handle is invalid
#define TESTO330BASE_INVALIDRESPONSE  2  // invalid or no answer from instrument
#define TESTO330BASE_ALLREAD          3  // all measurements read
#define TESTO330BASE_TOOMANYLOCATIONS 4  // too many locations on instrument
#define TESTO330BASE_OLDFIRMWARE      5  // old firmware of device
#define TESTO330BASE_ZEROING          6  // measure instrument testo 330/335 is zeroing. No online measure values available
#define TESTO330BASE_INVALIDARGUMENT  7  // one argument is out of range
#define TESTO330BASE_NOTSUPPORTED     8  // not supported on this insztrument

#define MAX_CHANNELS  64
#define MAX_VALUES    512
#define MAX_LOCATIONS 400
#define MAX_LENGTH    20

#define VIEWIDENT_2004_AT          0x0101
#define VIEWIDENT_2004_VT          0x0102
#define VIEWIDENT_2004_GT          0x0103
#define VIEWIDENT_2004_TP          0x0109
#define VIEWIDENT_2004_T1          0x010B
#define VIEWIDENT_2004_T2          0x010C
#define VIEWIDENT_2004_DTTEMP      0x010D
#define VIEWIDENT_2004_AT_MEAN     0x0113
#define VIEWIDENT_2004_VT_MEAN     0x0114
#define VIEWIDENT_2004_DRAUGHT     0x0301
#define VIEWIDENT_2004_PDIFF       0x0302
#define VIEWIDENT_2004_PABS        0x0303
#define VIEWIDENT_2004_FINEDRAUGHT 0x0304
#define VIEWIDENT_2004_PUMPFLOW    0x0501
#define VIEWIDENT_2004_AKKUVOLTAGE 0x0601
#define VIEWIDENT_2004_O2          0x0901
#define VIEWIDENT_2004_CO          0x0902
#define VIEWIDENT_2004_COAMB       0x0903
#define VIEWIDENT_2004_H2          0x0905
#define VIEWIDENT_2004_NO          0x0906
#define VIEWIDENT_2004_NO2         0x0907
#define VIEWIDENT_2004_SO2         0x0908
#define VIEWIDENT_2004_CO2         0x0909
#define VIEWIDENT_2004_LAMBDA      0x090C         // Luftüberschuss lambda
#define VIEWIDENT_2004_COUNDIL     0x090D
#define VIEWIDENT_2004_NOX         0x090E
#define VIEWIDENT_2004_O2REF       0x090F
#define VIEWIDENT_2004_CO2MAX      0x0910
#define VIEWIDENT_2004_CO2AMBIENT  0x0919
#define VIEWIDENT_2004_O2ZULUFT    0x091A
#define VIEWIDENT_2004_COMAX       0x091D
#define VIEWIDENT_2004_O2_MEAN     0x091F
#define VIEWIDENT_2004_QA          0x0B01
#define VIEWIDENT_2004_QA25        0x0B02
#define VIEWIDENT_2004_ETA         0x0B07
#define VIEWIDENT_2004_QA_MEAN     0x0B08
#define VIEWIDENT_2004_PARTICLEMASS 0x1B04
#define VIEWIDENT_2004_USERHCT      0xFF01
#define VIEWIDENT_2004_USERSMOKENR1 0xFF02
#define VIEWIDENT_2004_USERSMOKENR2 0xFF03
#define VIEWIDENT_2004_USERSMOKENR3 0xFF04
#define VIEWIDENT_2004_USERSMOKEMEAN 0xFF05
#define VIEWIDENT_2004_OILDERIVAT  0xFF06
#define VIEWIDENT_2004_GASFLOW     0xFF07
#define VIEWIDENT_2004_PABSINPUT   0xFF0A
#define VIEWIDENT_2004_OILFLOWRATE 0xFF0C
#define VIEWIDENT_2004_OILPRESSURE 0xFF0D
#define VIEWIDENT_2004_GASPOWER    0xFF0E
#define VIEWIDENT_2004_OILPOWER    0xFF0F
#define VIEWIDENT_2004_FUEL        0xFFF0       // spezieller Wert für Brennstofftext
#define VIEWIDENT_2004_DEVICE      0xFFF1       // spezieller Wert für Gerätetyp
#define VIEWIDENT_2004_VERSION     0xFFF2       // spezieller Wert für Firmwareversion
#define VIEWIDENT_2004_SERIALNUMBER 0xFFF3      // spezieller Wert für Seriennummer
#define VIEWIDENT_2004_SMOKEPUMP   0xFFF4       // spezieller Wert für Russpumpenbezeichnung

#define VIEWIDENT_2004_SURFACELOSS         0xFF3E
#define VIEWIDENT_2004_SURFACELOSS_POINTS  0xFF2F

#define VIEWIDENT_2004_VENTILATIONLOSS               0xFF4C
#define VIEWIDENT_2004_VENTILATIONLOSS_POINTS        0xFF30
#define VIEWIDENT_2004_VENTILATIONLOSS_OUT_TEMP      0xFF4B

#define VIEWIDENT_2004_QA_POINTS                     0xFF2E

#define VIEWIDENT_2004_SURFACELOSS_TEMP_LINKS        0xFF3F
#define VIEWIDENT_2004_SURFACELOSS_TEMP_VORNE_OBEN   0xFF40
#define VIEWIDENT_2004_SURFACELOSS_TEMP_VORNE_UNTEN  0xFF41
#define VIEWIDENT_2004_SURFACELOSS_TEMP_RECHTS       0xFF42
#define VIEWIDENT_2004_SURFACELOSS_TEMP_HINTEN_OBEN  0xFF43
#define VIEWIDENT_2004_SURFACELOSS_TEMP_HINTEN_UNTEN 0xFF44
#define VIEWIDENT_2004_SURFACELOSS_TEMP_DECKEL       0xFF45
#define VIEWIDENT_2004_SURFACELOSS_POWER             0xFF47

#define VIEWIDENT_2010_AT          0x0101
#define VIEWIDENT_2010_VT          0x0102
#define VIEWIDENT_2010_GT          0x0103
#define VIEWIDENT_2010_AT_MEAN     0x0124
#define VIEWIDENT_2010_VT_MEAN     0x0125

#define VIEWIDENT_2010_DRAUGHT     0x0301
#define VIEWIDENT_2010_PDIFF       0x0302
#define VIEWIDENT_2010_PABS        0x80010303
#define VIEWIDENT_2010_FINEDRAUGHT 0x0304

#define VIEWIDENT_2010_PUMPFLOW    0x0501

#define VIEWIDENT_2010_AKKUVOLTAGE 0x0601

#define VIEWIDENT_2010_O2          0x0901
#define VIEWIDENT_2010_CO          0x0902
#define VIEWIDENT_2010_COAMB       0x0903
#define VIEWIDENT_2010_COUNDIL     0x0904
#define VIEWIDENT_2010_H2          0x0905
#define VIEWIDENT_2010_NO          0x0906
#define VIEWIDENT_2010_NO2         0x0907
#define VIEWIDENT_2010_SO2         0x0908
#define VIEWIDENT_2010_CO2         0x0909
#define VIEWIDENT_2010_CXHY        0x090A
#define VIEWIDENT_2010_H2S         0x090B
#define VIEWIDENT_2010_O2REF       0x090C
#define VIEWIDENT_2010_CO2MAX      0x090D
#define VIEWIDENT_2010_O2N         0x090E
#define VIEWIDENT_2010_CO2AMBIENT  0x090F
#define VIEWIDENT_2010_O2ZULUFT    0x0910
#define VIEWIDENT_2010_COMAX       0x0913

#define VIEWIDENT_2010_PARTICLEMASS  0x1B04

#define VIEWIDENT_2010_NOX           0x00020915
#define VIEWIDENT_2010_O2_MEAN       0x0000091B

#define VIEWIDENT_2010_LAMBDA        0x00021282         // Luftüberschuss lambda

#define VIEWIDENT_2010_QA            0x00020B01
#define VIEWIDENT_2010_QAGR          0x00020B02
#define VIEWIDENT_2010_ETA           0x00020B03
#define VIEWIDENT_2010_QA25          0x00020B05
#define VIEWIDENT_2010_QA_MEAN       0x00020B08

#define VIEWIDENT_2010_USERHCT       0x80010108
#define VIEWIDENT_2010_USERSMOKENR1  0x80011B01
#define VIEWIDENT_2010_USERSMOKENR2  0x81011B01
#define VIEWIDENT_2010_USERSMOKENR3  0x82011B01
#define VIEWIDENT_2010_USERSMOKEMEAN 0x83021B01
#define VIEWIDENT_2010_OILDERIVAT    0x80051B02
#define VIEWIDENT_2010_GASFLOW       0xFF07
#define VIEWIDENT_2010_PABSINPUT     0xFF0A
#define VIEWIDENT_2010_OILFLOWRATE   0xFF0C
#define VIEWIDENT_2010_OILPRESSURE   0xFF0D
#define VIEWIDENT_2010_GASPOWER      0xFF0E
#define VIEWIDENT_2010_OILPOWER      0xFF0F
#define VIEWIDENT_2010_FUEL          0xFFF0       // spezieller Wert für Brennstofftext
#define VIEWIDENT_2010_DEVICE        0xFFF1       // spezieller Wert für Gerätetyp
#define VIEWIDENT_2010_VERSION       0xFFF2       // spezieller Wert für Firmwareversion
#define VIEWIDENT_2010_SERIALNUMBER  0xFFF3      // spezieller Wert für Seriennummer
#define VIEWIDENT_2010_SMOKEPUMP     0xFFF4       // spezieller Wert für Russpumpenbezeichnung

#define VIEWIDENT_2010_SURFACELOSS                   0x80021F08
#define VIEWIDENT_2010_SURFACELOSS_POINTS            0x80021F05

#define VIEWIDENT_2010_VENTILATIONLOSS               0x80021F07
#define VIEWIDENT_2010_VENTILATIONLOSS_POINTS        0x80021F06
#define VIEWIDENT_2010_VENTILATIONLOSS_OUT_TEMP      0x00000122

#define VIEWIDENT_2010_QA_POINTS                     0x00021F04

#define VIEWIDENT_2010_SURFACELOSS_TEMP_LINKS        0x8001011E
#define VIEWIDENT_2010_SURFACELOSS_TEMP_VORNE_OBEN   0x8101011E
#define VIEWIDENT_2010_SURFACELOSS_TEMP_VORNE_UNTEN  0x8201011E
#define VIEWIDENT_2010_SURFACELOSS_TEMP_RECHTS       0x8301011E
#define VIEWIDENT_2010_SURFACELOSS_TEMP_HINTEN_OBEN  0x8401011E
#define VIEWIDENT_2010_SURFACELOSS_TEMP_HINTEN_UNTEN 0x8501011E
#define VIEWIDENT_2010_SURFACELOSS_TEMP_DECKEL       0x8601011E
#define VIEWIDENT_2010_SURFACELOSS_TEMP_BODEN        0x8701011E
#define VIEWIDENT_2010_SURFACELOSS_POWER             0x80011903

#define UNIT_GRADC            1
#define UNIT_GRADF            2
#define UNIT_PERCENT          4
#define UNIT_METERPERSEC      5
#define UNIT_CMSQUARE        10
#define UNIT_VOLT            11
#define UNIT_SECONDS         14
#define UNIT_LAMBDA          22
#define UNIT_MBAR            23
#define UNIT_HPA             24
#define UNIT_M3PERHOUR       33
#define UNIT_METER           64
#define UNIT_MINUTES         69
#define UNIT_LITERPERMIN     73
#define UNIT_CM              80
#define UNIT_INVALID         99
#define UNIT_POWERKW        117
#define UNIT_LITER          118
#define UNIT_VOLPROZ        130
#define UNIT_PPM            131
#define UNIT_BAR            133
#define UNIT_MGPERKWH       136
#define UNIT_PA             137
#define UNIT_MGPERM3        139
#define UNIT_KELVIN         155
#define UNIT_KGPERHOUR      191
#define UNIT_LITERPERHOUR   208
#define UNIT_NONE           255

//-------------------------------------------------------------------------------
// values returned by function Testo330GetDeviceState
//-------------------------------------------------------------------------------

#define STATE_INIT                           1 /* @emem               1   Initialisierung  */
#define STATE_MAIN_MENU                      2 /* @emem  A02 B02 C02  2   Main Menu  */
#define STATE_MEASURE_MENU                   4/* @emem  A03 B03      3   Measure Menu  */
#define STATE_MEMORY_PLACE_MENU              4/* @emem  A04          4   Memory / Measureplace Menu */
#define STATE_MEMORY_EXTRA_MENU              5/* @emem  A05          5   Memory / Measureplace Menu */
#define STATE_PROTOKOLL_MENU                 6/* @emem  A06          6   Protokoll Menu */
#define STATE_VIEW_MEASUREPLACE              7/* @emem  A07          7   View Measure Place */
#define STATE_VIEW_MEASUREPROTOKOLL          8/* @emem  A09          8   View Measure Place */
#define STATE_MEMORY_PLACE_ZEROING_MENU      9/* @emem  A10          9   Memory / Measureplace Menu during Zeroing */
#define STATE_FUEL_ZEROING_MENU              10/* @emem  A10          10  Fuel Menu during Zeroing */
#define STATE_ZEROING                        11/* @emem  A10          11  Zeroing */
#define STATE_MEASURE_FLUEGAS                12/* @emem  A11          12  Measure Abgas */
#define STATE_INPUT_ANLAGE_CHANGE            13/* @emem  A15          13  Change Input Anlage */
#define STATE_INPUT_ANLAGE_NR                14/* @emem  A18          14  Input Anlagen Nr. */
#define STATE_INPUT_ANLAGE_NAME              15/* @emem  A19          15  Input Anlagen Name */
#define STATE_INPUT_ANLAGE_STRASSE           16/* @emem  A20          16  Input Anlagen Strasse */
#define STATE_INPUT_ANLAGE_PLZ               17/* @emem  A21          17  Input Anlagen PLZ */
#define STATE_SWITCH_OFF                     18/* @emem  A22          18  Switch Off */
#define STATE_FUEL_MENU                      19/* @emem      B23      19  Fuel Menu */
#define STATE_DEVICE_SETTING_MENU            20/* @emem      B24      20  Device Setting Menu */
#define STATE_MEASUREPLACE_SETTING           21/* @emem          C44  21  Measureplace Settings */
#define STATE_DEVICE_DIAGNOSTIC              22/* @emem          C45  22  Device Diagnostic */
#define STATE_MEASURE_DRAUGHT_COUNT          23/* @emem  A57          23  Draught Count */
#define STATE_MEASURE_DRAUGHT                24/* @emem  A58          24  DRaught Measure */
#define STATE_MEASURE_COUNVERD_MEHRLOCH      25/* @emem  A60          25  CO unverduennt - Mehrlochsonde stecken */
#define STATE_MEASURE_COUNVERD               26/* @emem  A61          26  CO unverduennt Measure */
#define STATE_MEASURE_COAMB_COUNT            27/* @emem  A63          27  CO Ambiance - Count to Zero */
#define STATE_MEASURE_COAMB                  28/* @emem  A64          28  CO Ambiance - Measure */
#define STATE_MEASURE_DIFFPREASSURE_COUNT    29/* @emem  A65          29  Count dP Measure */
#define STATE_MEASURE_DIFFPREASSURE          30/* @emem  A66          30  Measure dP */
#define STATE_UNDER_CONSTRUCTION             31/* @emem               31  Seite ist noch in Arbeit */
#define STATE_RECHARGE_ACCU                  32/* @emem               32  Akku lade State       */
#define STATE_MEASURE_O2_ADDITIONAL_AIR      33/* @emem               33  Measure O2zuluft      */
#define STATE_MEASURE_CO2AMB_COUNT           34/* @emem               34  CO2 Ambiance count*/
#define STATE_MEASURE_CO2AMB_SETPABS         35/* @emem               35  CO2 Ambiance Pabs Value Input */
#define STATE_MEASURE_CO2AMB                 36/* @emem               36  CO2 Ambiance Measure */
#define STATE_MEASURE_DELTAT                 37/* @emem               37  Measure DeltaT  */
#define STATE_OFF                            38/* @emem               38  Nach dem Abschaltbild folgt ganz Ausschalten */
#define STATE_SWITCH_ON                      39/* @emem  A01          39  Einschaltbild nach dem Initialisieren */
#define STATE_SET_VIEW                       40/* @emem      B30      40  Anzeigefolge einstellen */
#define STATE_SET_VIEW_MEASURE               41/* @emem      B38      41  Anzeigefolge Messgrösse einstellen */
#define STATE_SET_VIEW_UNIT                  42/* @emem      B38      42  Anzeigefolge Einheit einstellen */
#define STATE_SMOKENR_HEATTRANSFER_SETTING   43/* @emem      B26      43  SmokeNr-Heattransfer Settings */
#define STATE_SMOKENR_HEATTRANSFER_INPUT     44/* @emem      B26      44  SmokeNr-Heattransfer Input */
#define STATE_CHOOSE_PRINTER_MENU            45/* @emem      B ?      45  Druckerauswahl Menu */
#define STATE_PRINTER_MENU                   46/* @emem      B ?      46  Drucker Menu */
#define STATE_LANGUAGE_MENU                  47/* @emem      B ?      47  Drucker Menu */
#define STATE_SENSOR_CONFIG_SETTING          48/* @emem          C43  48  Sensoreinstellmenü */
#define STATE_SENSOR_CONFIG_INPUT            49/* @emem          C43  49  Sensoreinstellmenü */
#define STATE_SENSOR_PROTECT_SETTING         50/* @emem          C43  50  Sensorschutzabschaltungs-Menü */
#define STATE_SENSOR_PROTECT_INPUT           51/* @emem          C43  51  Sensorschutzabschaltungs-Menü */
#define STATE_RINSE                          52/* @emem  A22          52  Sensoren spuelen */
#define STATE_GASFLOWRATE_SETTING            53/* @emem      B68      53  Gasdruchsatz Setting-Menü */
#define STATE_GASFLOWRATE_INPUT              54/* @emem      B69 B71  54  Gasdruchsatz Eingabe-Menü */
#define STATE_GASFLOWRATE_MEASURE            55/* @emem      B70      55  Gasdruchsatz MessMenü */
#define STATE_BARCODE                        56/* @emem               56  Messort eingabe über Barcode */
#define STATE_RECALIBRATE_SETTING            57/* @emem          C43  57  Nachkalibrierungs-Menü */
#define STATE_RECALIBRATE_INPUT              58/* @emem          C43  58  Nachkalibrierungs-Menü */
#define STATE_RECALIBRATE                    59/* @emem          C43  59  Nachkalibrierungs-Menü */
#define STATE_FUELCOEFF_SETTING              60/* @emem      B26      60  Brennstoffkoeffizienten Auswhl */
#define STATE_VALUE_INPUT                    61/* @emem               61  Werte Eingabe */
#define STATE_SET_DATETIME                   62/* @emem      B31      62  Datum/Uhrzeit einstellen */
#define STATE_NEW_MEASPLACE                  63/* @emem  A18          63  Messort Anlagen Nr. */
#define STATE_TEXTEDIT                       64/* @emem  A18          64  Textedit */
#define STATE_MOMORY_MEASPLACE               65/* @emem  A04          65  Save/Measureplace */
#define STATE_MEMPROT                        66/* @emem  A06          66  Measureplace Protocol*/
#define STATE_FUELCOEFF_ZEROING_SETTING      67/* @emem               67  Brennstoffkoeffizienten Eingabe waehrend der Nullungsphase */
#define STATE_ADDITIONAL_ZEROING             68/* @emem               68  Nullungsphase für Nachkal und Sensordiagnose */
#define STATE_MEMPROT_EXTRA                  69/* @emem               69  Protocol extra */
#define STATE_PRINTERTEXT_MENU               70/* @emem      B33f     70  Drucktexteingabe */
#define STATE_CONF_STARTFUKEYS               71/* @emem               71  Konfiguration fuer die Funktionstasten beim Start */
#define STATE_MEASUREPLACE_EXTRA             72/* @emem      B33f     72  Messort extra */
#define STATE_MEMORY_DATA_CLEAN              73/* @emem               73  Memory(Messort Protocol) clean */
#define STATE_ALARMTHRESHOLD_SETTING         74/* @emem      B29      74  Alarmschwellen Eingabe */
#define STATE_DIAG_GASWAY                    75/* @emem          C45  75  Gasweg-/Dichtigkeitsprüfung */
#define STATE_KERNSTROM                      76/* @emem               76  Kernstromsuche */
#define STATE_OILFLOWRATE_SETTING            77/* @emem      B68      77  Oildruchsatz Setting-Menü */
#define STATE_OILFLOWRATE_INPUT              78/* @emem      B69 B71  78  Oildruchsatz Eingabe-Menü */
#define STATE_CHANGE_MEASPLACE               79/* @emem  A15          79    change Messort */
#define STATE_MEASURE_BIMSCHV                80/* @emem  A53          80    change Messort */
#define STATE_MEMORY_EXTRA                   81/* @emem               81  Memory Extra  */
#define STATE_SLAVE_MODE                     82/* @emem               82  Slave Mode  */
#define STATE_MEASURE_BIMSCHV_DRAUGHT_COUNT  83/* @emem      B56      83  BimschV Draught Count */
#define STATE_MEASURE_BIMSCHV_DRAUGHT        84/* @emem      B56      84  BimschV Draught Measure */
#define STATE_ERROR_DIAGNOSTIC               85/* @emem          C52  85  Fehlerdiagnose */
#define STATE_DEVICE_IN_SERVICE              86/* @emem               86  Geraet in Service */
#define STATE_QA_MEAS                        87/* @emem      B66      87  Geraet in Service */
#define STATE_SENSOR_DIAGNOSTIC              88/* @emem          C45  88  Sensordiagnose */
#define STATE_ZEROING_AFTER_START            89/* @emem               89  Nullung nach dem Start */
#define STATE_MEAS_O2_ADD_AIR_COUNT          90/* @emem               90  O2-Zuluft Nullung */
#define STATE_LEAKAGE_DETECTION              91/* @emem               91  Nullungsphase vor Lecksuche */
#define STATE_BAROM_HEIGHT_SETTING           92/* @emem               92  Eingabe für Barometer Druck und Meter über NN */
#define STATE_LEAKDET_MEASUREMENT            93/* @emem               93  Messergebnisse der Lecksuchsonde darstellen */
#define STATE_KERNSTROM_ITALY                94/* @emem               94  Kernstromsuche fuer Italien */
#define STATE_MEASURE_QUALIGAZ               95/* @emem               95  Qualigaz für Frankreich */
#define STATE_MEASURE_MIDDLE_I               96/* @emem               96  Mittelwert Messung Italien */
#define STATE_MEASURE_MIDDLE_I_VALUES        97/* @emem               97  Mittelwerte Anzeigen Italien */
#define STATE_MEASURE_CO_FLUEGAS_COUNT       98/* @emem               98  CO Abgas Nullung */
#define STATE_MEASURE_CO_FLUEGAS             99/* @emem               99  CO Abgas Measure */
#define STATE_MEASURE_MIDD_I_CHECK_SETTING   100/* @emem              100  Italien Abfrage Setting-Menü */
#define STATE_MEASURE_MIDD_I_CHECK_INPUT     101/* @emem              101  Italien Abfrage Eingabe-Menü */
#define STATE_BURNER_STATUS                  102/* @emem              102  Feuerautomat Zustand */
#define STATE_BURNER_FAILURE                 103/* @emem              103  Feuerautomat Stoerung */
#define STATE_BURNER_INDENTIFICATION         104/* @emem              104  Feuerautomat Identifikaton  */
#define STATE_BURNER_STATISTIC               105/* @emem              105  Feuerautomat Statistik */
#define STATE_BURNER_SETTINGS                106/* @emem              106  Feuerautomat Einstellungen */
#define STATE_DIALOG_MESSAGE                 107/* @emem              107  Dialog Message Fenster das bestätigt werden muss */
#define STATE_BURNER_ADAPTER                 108/* @emem              108  Feuerautomaten Adapter Info */
#define STATE_DIAG_LEAKPROOF_CH              109/* @emem          C45 109  Gasweg-/Dichtigkeitsprüfung */
#define STATE_COMMUNICATION_MENU             110/* @emem              110  Menu Verbindung einstellen */
#define STATE_BOILER_POWER                   109/* @emem          C45 109  Gasweg-/Dichtigkeitsprüfung */
#define STATE_BOILERFLOW_INPUT               110/* @emem              110  Menu Verbindung einstellen */
#define STATE_SOLIDFUEL_MEASURE              109/* @emem          C45 109  Gasweg-/Dichtigkeitsprüfung */
#define STATE_SOLIDFUEL_MEASURETIME_INPUT    110/* @emem              110  Menu Verbindung einstellen */
#define STATE_GASWAYCHECK_CH                 111/* @emem              111  Gaswegprüfung fuer Schweiz */
#define STATE_MEMORY_FOLDER                  111/* @emem              111  Memory Folder*/
#define STATE_MEMORY_FOLDER_NEW_FOLDER       112/* @emem              112  MemoryFolder new Folder */
#define STATE_MEMORY_FOLDER_CHANGE_FOLDER    113/* @emem              113  MemoryFolder chnage Folder */
#define STATE_EDIT_MEASURE_PLACE             114/* @emem              114  Messorteinstellung*/
#define STATE_DATA_SETTING                   115/* @emem              115  Daten Eingabe*/
#define STATE_ASK_THIN                       116/* @emem              116  Eingabemaske für Nachkalibrierung der Verdünnung */
#define STATE_CHANGE_CROSS_SECTION           117/* @emem              117  Cross section setting */
#define STATE_MEASPROGCONFIG                 118/* @emem              118  Messprogramm Konfiguration */
#define STATE_STARTMEASPROG                  119/* @emem              119  Start Messprogramm State */
#define STATE_MEASURE_MS40HPA_COUNT          120/* @emem              120  m/s 40 hPA Nullung */
#define STATE_MEASURE_MS40HPA_MEASURE        121/* @emem              121  m/s 40 hPA Measung*/
#define STATE_LOGGER_FLUEGAS                 122/* @emem              122  Measure Abgas Logger */
#define STATE_CALIBRATION_DATA               123/* @emem              123  Kalibrier daten */
#define STATE_ASKFORZEROING                  124/* @emem              124  Vor der Mesung Nullen oder nicht */
#define STATE_AUTO_OFF_SETTING               125/* @emem              125  Auto Off */
#define STATE_ABS_PRESSURE_SETTING           126/* @emem              126  Pabs eingabe*/

//-------------------------------------------------------------------------------
// TChannel
// contains the data of one measure channel
//-------------------------------------------------------------------------------

typedef struct
{
   unsigned int uViewIdent;       // possible values are defined as VIEWIDENT_2004_xx
   unsigned int uUnit;            // possible values are defined as UNIT_xx
   int          iPrecision;       // -1: eine Nachkommastelle, -2: zwei Nachkommastellen
   float        fValue;           // Messwet, ungültiger Wert: FLT_MAX
} TChannel;

//-------------------------------------------------------------------------------
// TOnlineChannel
// contains the data of one online measure channel
//-------------------------------------------------------------------------------

typedef struct
{
   unsigned int uViewIdent;       // possible values are defined as VIEWIDENT_2004_xx
   unsigned int uUnit;            // possible values are defined as UNIT_xx
   int          iPrecision;       // precision of fValue (0: integer, 255: one digit, 254: 2 digits)
   unsigned int iType;            // decides which element is valid
                                  // 0: value is invalid
                                  // 1: fValue is valid (float value)
                                  // 2: szValue is valid (text value)
   float        fValue;           // measure value as float
   TCHAR         szValue[32];      // Text (e.g. name of fuel)
   TCHAR        szText[32];       // Text in Landessprache
   TCHAR         szName[32];       // Name (can be set by application programme)
   int          iID;              // ID(can be set by application programme)
} TOnlineChannel;

//-------------------------------------------------------------------------------
// TProtocol
// contains the data of one measure protocol
//-------------------------------------------------------------------------------

typedef struct
{
   unsigned int uSerialNumber;          // serial number of measure device
   unsigned int uSNParticleDevice;       // serial number particle device
   unsigned int   uLastServiceYear;
   unsigned int   uLastServiceMonth;
   unsigned int   uLastServiceDay;

   TCHAR         szFirmware[32];        // Firmware version
   TCHAR        szLocation[32];        // name of measure site
   TCHAR         szName[32];            // name
   TCHAR         szRoad[32];            // raod
   TCHAR         szZIP[32];             // Postcode
   TCHAR        szCity[32];            // city
   unsigned int uStartDateTime;
   unsigned int uEndDateTime;
/*
   unsigned int uDay;                  // day of month (1,..,31)
   unsigned int uMonth;                // month (1,..,12)
   unsigned int uYear;                 // year (2004,...)
   unsigned int uHour;                 // Stunde
   unsigned int uMinute;               // Minute
   unsigned int uSecond;               // Sekunde
*/
   TCHAR         szFuel[32];            // name of used fuel
   float        fRusszahl1;            // smoke number 1
   float        fRusszahl2;            // smoke number 2
   float        fRusszahl3;            // smoke number 3
   TCHAR        szRusspumpe[32];       // Bezeichnung der Russpumpe
   float        fWTT;                  // Wärmeträgertemperatur
   int          iOilDerivate;          // Ölderivat 1:ja, 0:nein, -1: nicht eingegeben

   int          iLoadRange;            // 1: Vollast, 2: Teillast
   float        fFuelHumidity;         // Fuel Humidity (particle measurement) 
   float        fNominalPower;         // nominal power
   float        fMassUncertainty95;    // uncertainty particle mass concentration 95 % confidence level

// nicht für testo 300

   int          bMean;                 // 1 for Italian Median mesurement
   int          b4Pa;                  // 1 for 4Pa measurement
   int         iCOLessThan;            // nur Italien
   int         iLegalRegulation;
   int         iIsolation;
   int         iController;
   int         iCirculationOfAir;      // nur Italien

   int         iCycle4Pa;                // cycle 4Pa measurement in msec
   float       fMin4Pa;                  // min value 4Pa
   float       fMax4Pa;                  // max value 4Pa

// Ende nicht für testo 300

   unsigned int uChannels;               // number of used channels
   unsigned int uValues;                 // number of values
   TChannel     channel[(MAX_VALUES+1)*MAX_CHANNELS]; // measure info for all used channels

   unsigned int uTimes;           
   unsigned int uStartTime[MAX_VALUES];
   unsigned int uEndTime[MAX_VALUES];

} TProtocol;

//-------------------------------------------------------------------------------
// TInstrumentInfo
// returns a structure containg the complete instrument info
//-------------------------------------------------------------------------------

enum Properties
{
   PROP_CUST_NUMBER  = 0x00000001, // Instrument supports customer numbers-->
   PROP_CUST_NAME    = 0x00000002, // Instrument supports customer names-->
   PROP_INST_NUMBER  = 0x00000004, // Instrument supports installation numbers-->
   PROP_INST_TYPE    = 0x00000008, // Instrument supports installation types (see field InstallationType in BoilerType structure)--> 
   PROP_FIREPLACE_ID = 0x00000010, // Instrument supports Fireplace IDs-->
   PROP_TESTER       = 0x00000020, // Instrument supports testers-->
   PROP_EDITABLE     = 0x00000040, // Instrument allows editing of customer data-->
   PROP_ERASE        = 0x00000080, // Erasure of customer data is required before uploading new data-->
   PROP_SINGLE       = 0x00000100, // Instrument supports single measurements-->
   PROP_CUST_DB      = 0x00000200, // Instrument contains customer database-->   
};

typedef struct
{
   TCHAR szDeviceName[256];
   TCHAR szSerialNumber[256];
   TCHAR szFirmwareVersion[256];
   TCHAR szCertifications[256];
   TCHAR szTestCenter[256];
   // Properties of this instrument
   Properties props;
   // Date of the latest instrument check
   unsigned int uLastCheckDate;
   int iMaxNumCustomers;
   int iMaxNumFireplaces;
   int iMaxNumTesters;
   int iMaxNumMeasurements;
   int iCustomerIdLength;
   int iFireplaceIdLength;
   int iNumCustomers;
   int iNumFireplaces;
   int iNumTesters;
   int iNumMeasurements;
   unsigned int uLastMeasurementDate;
  // Reference to the actually selected tester
   int iSelectedTester;
   // Indicates if system time of the instrument is within 10 minutes tolerance
   unsigned int bTimeValid;
} TInstrumentInfo;

#define COMM_IRDA    1000

#ifdef __cplusplus
extern "C" {
#endif

TESTO330BASE_EXPORT const char* WINAPI Testo330GetLastErrorText();
TESTO330BASE_EXPORT CLogging* WINAPI Testo330GetLogger( TCHAR * szFile );

// open vias Bluetooth or if exactly one connected device via USB
TESTO330BASE_EXPORT void* WINAPI Testo330Open( int uCommType, int bSetSlaveMode, void* dummy = 0 );

// open if there are multiple devices at USB bus
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetNumberOfUsbDevices();
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetUsbSerialNumber( unsigned int uDevice );
TESTO330BASE_EXPORT void* WINAPI Testo330OpenWithUsbSerialNumber( int bSetSlaveMode, unsigned int uSerialNumber );

TESTO330BASE_EXPORT unsigned int WINAPI Testo330DeviceType( void* hTesto330, unsigned int* puDeviceType, unsigned int* puSubType );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetInstrumentInfo( void* hTesto330, TInstrumentInfo* pinstrumentInfo );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetDeviceState( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330SetLanguageUS( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330Close( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330CloseOnly( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330InitProtocols( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetNextProtocol( 
      void* hTesto330, TProtocol* pProtocol, 
      unsigned int fLast, 
      TOnlineChannel* channels, 
      unsigned int uMaxChannels);
TESTO330BASE_EXPORT unsigned int WINAPI Testo330SetActualFuel( void* hTesto330, unsigned int uFuelID );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetOnlineConfiguration( void* hTesto330, TOnlineChannel* channels, unsigned int uMaxChannels );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetOnlineValues( void* hTesto330, TOnlineChannel* channels, unsigned int uMaxChannels );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetUnitText( void* hTesto330, unsigned int uUnit, TCHAR* szUnitText, unsigned int uSizeUnitText );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330StartZeroing( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330IsZeroing( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330StartPump( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330StopPump( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330LoadLocations( void* hTesto330, unsigned int cLocations, TCHAR* szLocations,
   TCHAR* szNames, TCHAR* szRoads, TCHAR* szPLZs, TCHAR* szCities, unsigned int* puFuels );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetAllProtocols( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetNumProtocols( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetProtocolInfo( 
   void* hTesto330,
   unsigned int iProt,
   unsigned char* szFolder, // Excel expects ASCII strings (not UNICODE)
   unsigned char* szName,   // Excel expects ASCII strings (not UNICODE)
   unsigned int* puYear,
   unsigned int* puMonth,
   unsigned int* puDay,
   unsigned int* puHour,
   unsigned int* puMinute,
   unsigned int* puSecond );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330ReadProtocol( void* hTesto330, unsigned int iProt );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetNumColumns( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetNumRows( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetColumnIdent( void* hTesto330, unsigned int iCol );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetColumnName( void* hTesto330, unsigned int iCol, unsigned char* szName );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetValue( void* hTesto330, unsigned int iCol, unsigned int iRow, unsigned char* szValue );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetHeatingCheckValues( void* hTesto330, TOnlineChannel* channels, unsigned int uMaxChannels );

TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetSystemState( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetMeasStatus( void* hTesto330 );

TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetSmokeNumber1( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetSmokeNumber2( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetSmokeNumber3( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetSmokeNumberMean( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetOilDerivate( void* hTesto330 );

// Functions to read online values from Excel
TESTO330BASE_EXPORT unsigned int WINAPI Testo330GetSerialNumber( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Excel330OnlineInit( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Excel330OnlineNumChannels( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Excel330OnlineChannelID( void* hTesto330, unsigned int uChannel, TCHAR* szID );
TESTO330BASE_EXPORT unsigned int WINAPI Excel330OnlineRead( void* hTesto330 );
TESTO330BASE_EXPORT unsigned int WINAPI Excel330OnlineValue( void* hTesto330, unsigned int uChannel, TCHAR* szValue );

#ifdef __cplusplus
}
#endif

#endif