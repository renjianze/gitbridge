#ifndef __DATABASE_H
#define __DATABASE_H
#include "TSMaster.h"

// CAN Databases
// CAN Message BMS_7_1
extern const TCANSignal BMS_BatteryPackSOC_BMS_7_1;
struct _BMS_7_1;
typedef struct _BMS_7_1 TBMS_7_1;
struct _BMS_7_1{
  TCAN FCAN;
  double get_BMS_BatteryPackSOC(void) { return com.get_can_signal_value((TCANSignal* const)&BMS_BatteryPackSOC_BMS_7_1, FCAN.FData);}
  void set_BMS_BatteryPackSOC(const double value) { com.set_can_signal_value((TCANSignal* const)&BMS_BatteryPackSOC_BMS_7_1, FCAN.FData, value);}
  __declspec(property(get = get_BMS_BatteryPackSOC, put = set_BMS_BatteryPackSOC)) double BMS_BatteryPackSOC;
  void init() { FCAN = create().FCAN; }
  TBMS_7_1 create() { CANMsgDecl(_BMS_7_1, cBMS_7_1, 0, 0, 8, 726) return cBMS_7_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BMS_4_1
extern const TCANSignal BMS_ChargeCurrentRequest_BMS_4_1;
extern const TCANSignal BMS_ChargerModeRequest_BMS_4_1;
extern const TCANSignal BMS_ChargeVoltageRequest_BMS_4_1;
struct _BMS_4_1;
typedef struct _BMS_4_1 TBMS_4_1;
struct _BMS_4_1{
  TCAN FCAN;
  double get_BMS_ChargeCurrentRequest(void) { return com.get_can_signal_value((TCANSignal* const)&BMS_ChargeCurrentRequest_BMS_4_1, FCAN.FData);}
  void set_BMS_ChargeCurrentRequest(const double value) { com.set_can_signal_value((TCANSignal* const)&BMS_ChargeCurrentRequest_BMS_4_1, FCAN.FData, value);}
  __declspec(property(get = get_BMS_ChargeCurrentRequest, put = set_BMS_ChargeCurrentRequest)) double BMS_ChargeCurrentRequest;
  double get_BMS_ChargerModeRequest(void) { return com.get_can_signal_value((TCANSignal* const)&BMS_ChargerModeRequest_BMS_4_1, FCAN.FData);}
  void set_BMS_ChargerModeRequest(const double value) { com.set_can_signal_value((TCANSignal* const)&BMS_ChargerModeRequest_BMS_4_1, FCAN.FData, value);}
  __declspec(property(get = get_BMS_ChargerModeRequest, put = set_BMS_ChargerModeRequest)) double BMS_ChargerModeRequest;
  double get_BMS_ChargeVoltageRequest(void) { return com.get_can_signal_value((TCANSignal* const)&BMS_ChargeVoltageRequest_BMS_4_1, FCAN.FData);}
  void set_BMS_ChargeVoltageRequest(const double value) { com.set_can_signal_value((TCANSignal* const)&BMS_ChargeVoltageRequest_BMS_4_1, FCAN.FData, value);}
  __declspec(property(get = get_BMS_ChargeVoltageRequest, put = set_BMS_ChargeVoltageRequest)) double BMS_ChargeVoltageRequest;
  void init() { FCAN = create().FCAN; }
  TBMS_4_1 create() { CANMsgDecl(_BMS_4_1, cBMS_4_1, 0, 0, 8, 720) return cBMS_4_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BMS_1_1
extern const TCANSignal BMS_BatteryPackCurrent_BMS_1_1;
struct _BMS_1_1;
typedef struct _BMS_1_1 TBMS_1_1;
struct _BMS_1_1{
  TCAN FCAN;
  double get_BMS_BatteryPackCurrent(void) { return com.get_can_signal_value((TCANSignal* const)&BMS_BatteryPackCurrent_BMS_1_1, FCAN.FData);}
  void set_BMS_BatteryPackCurrent(const double value) { com.set_can_signal_value((TCANSignal* const)&BMS_BatteryPackCurrent_BMS_1_1, FCAN.FData, value);}
  __declspec(property(get = get_BMS_BatteryPackCurrent, put = set_BMS_BatteryPackCurrent)) double BMS_BatteryPackCurrent;
  void init() { FCAN = create().FCAN; }
  TBMS_1_1 create() { CANMsgDecl(_BMS_1_1, cBMS_1_1, 0, 0, 8, 240) return cBMS_1_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message HCU_1_8_1
extern const TCANSignal HCU_ChargeConnectStatus_HCU_1_8_1;
struct _HCU_1_8_1;
typedef struct _HCU_1_8_1 THCU_1_8_1;
struct _HCU_1_8_1{
  TCAN FCAN;
  double get_HCU_ChargeConnectStatus(void) { return com.get_can_signal_value((TCANSignal* const)&HCU_ChargeConnectStatus_HCU_1_8_1, FCAN.FData);}
  void set_HCU_ChargeConnectStatus(const double value) { com.set_can_signal_value((TCANSignal* const)&HCU_ChargeConnectStatus_HCU_1_8_1, FCAN.FData, value);}
  __declspec(property(get = get_HCU_ChargeConnectStatus, put = set_HCU_ChargeConnectStatus)) double HCU_ChargeConnectStatus;
  void init() { FCAN = create().FCAN; }
  THCU_1_8_1 create() { CANMsgDecl(_HCU_1_8_1, cHCU_1_8_1, 0, 0, 8, 708) return cHCU_1_8_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message HCU_1_6_1
extern const TCANSignal Checksum_HCU_1_6_HCU_1_6_1;
extern const TCANSignal HCU_DCDCPrechargeCurrentLimit_HCU_1_6_1;
extern const TCANSignal HCU_DCDCEnable_HCU_1_6_1;
extern const TCANSignal HCU_DCDCHVOutputVoltageRequest_HCU_1_6_1;
extern const TCANSignal HCU_DischargePermission_HCU_1_6_1;
extern const TCANSignal HCU_ChargeLockCmd_AC_HCU_1_6_1;
extern const TCANSignal LiveCounter_HCU_1_6_HCU_1_6_1;
struct _HCU_1_6_1;
typedef struct _HCU_1_6_1 THCU_1_6_1;
struct _HCU_1_6_1{
  TCAN FCAN;
  double get_Checksum_HCU_1_6(void) { return com.get_can_signal_value((TCANSignal* const)&Checksum_HCU_1_6_HCU_1_6_1, FCAN.FData);}
  void set_Checksum_HCU_1_6(const double value) { com.set_can_signal_value((TCANSignal* const)&Checksum_HCU_1_6_HCU_1_6_1, FCAN.FData, value);}
  __declspec(property(get = get_Checksum_HCU_1_6, put = set_Checksum_HCU_1_6)) double Checksum_HCU_1_6;
  double get_HCU_DCDCPrechargeCurrentLimit(void) { return com.get_can_signal_value((TCANSignal* const)&HCU_DCDCPrechargeCurrentLimit_HCU_1_6_1, FCAN.FData);}
  void set_HCU_DCDCPrechargeCurrentLimit(const double value) { com.set_can_signal_value((TCANSignal* const)&HCU_DCDCPrechargeCurrentLimit_HCU_1_6_1, FCAN.FData, value);}
  __declspec(property(get = get_HCU_DCDCPrechargeCurrentLimit, put = set_HCU_DCDCPrechargeCurrentLimit)) double HCU_DCDCPrechargeCurrentLimit;
  double get_HCU_DCDCEnable(void) { return com.get_can_signal_value((TCANSignal* const)&HCU_DCDCEnable_HCU_1_6_1, FCAN.FData);}
  void set_HCU_DCDCEnable(const double value) { com.set_can_signal_value((TCANSignal* const)&HCU_DCDCEnable_HCU_1_6_1, FCAN.FData, value);}
  __declspec(property(get = get_HCU_DCDCEnable, put = set_HCU_DCDCEnable)) double HCU_DCDCEnable;
  double get_HCU_DCDCHVOutputVoltageRequest(void) { return com.get_can_signal_value((TCANSignal* const)&HCU_DCDCHVOutputVoltageRequest_HCU_1_6_1, FCAN.FData);}
  void set_HCU_DCDCHVOutputVoltageRequest(const double value) { com.set_can_signal_value((TCANSignal* const)&HCU_DCDCHVOutputVoltageRequest_HCU_1_6_1, FCAN.FData, value);}
  __declspec(property(get = get_HCU_DCDCHVOutputVoltageRequest, put = set_HCU_DCDCHVOutputVoltageRequest)) double HCU_DCDCHVOutputVoltageRequest;
  double get_HCU_DischargePermission(void) { return com.get_can_signal_value((TCANSignal* const)&HCU_DischargePermission_HCU_1_6_1, FCAN.FData);}
  void set_HCU_DischargePermission(const double value) { com.set_can_signal_value((TCANSignal* const)&HCU_DischargePermission_HCU_1_6_1, FCAN.FData, value);}
  __declspec(property(get = get_HCU_DischargePermission, put = set_HCU_DischargePermission)) double HCU_DischargePermission;
  double get_HCU_ChargeLockCmd_AC(void) { return com.get_can_signal_value((TCANSignal* const)&HCU_ChargeLockCmd_AC_HCU_1_6_1, FCAN.FData);}
  void set_HCU_ChargeLockCmd_AC(const double value) { com.set_can_signal_value((TCANSignal* const)&HCU_ChargeLockCmd_AC_HCU_1_6_1, FCAN.FData, value);}
  __declspec(property(get = get_HCU_ChargeLockCmd_AC, put = set_HCU_ChargeLockCmd_AC)) double HCU_ChargeLockCmd_AC;
  double get_LiveCounter_HCU_1_6(void) { return com.get_can_signal_value((TCANSignal* const)&LiveCounter_HCU_1_6_HCU_1_6_1, FCAN.FData);}
  void set_LiveCounter_HCU_1_6(const double value) { com.set_can_signal_value((TCANSignal* const)&LiveCounter_HCU_1_6_HCU_1_6_1, FCAN.FData, value);}
  __declspec(property(get = get_LiveCounter_HCU_1_6, put = set_LiveCounter_HCU_1_6)) double LiveCounter_HCU_1_6;
  void init() { FCAN = create().FCAN; }
  THCU_1_6_1 create() { CANMsgDecl(_HCU_1_6_1, cHCU_1_6_1, 0, 0, 8, 248) return cHCU_1_6_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message TBOX_8_1
extern const TCANSignal TBOXTime_Hour_TBOX_8_1;
extern const TCANSignal TBOXTime_Minute_TBOX_8_1;
extern const TCANSignal TBOXTime_Second_TBOX_8_1;
extern const TCANSignal TBOXTime_Year_TBOX_8_1;
extern const TCANSignal TBOXTime_Month_TBOX_8_1;
extern const TCANSignal TBOXTime_Day_TBOX_8_1;
extern const TCANSignal TBOXTime_Millisecond_TBOX_8_1;
struct _TBOX_8_1;
typedef struct _TBOX_8_1 TTBOX_8_1;
struct _TBOX_8_1{
  TCAN FCAN;
  double get_TBOXTime_Hour(void) { return com.get_can_signal_value((TCANSignal* const)&TBOXTime_Hour_TBOX_8_1, FCAN.FData);}
  void set_TBOXTime_Hour(const double value) { com.set_can_signal_value((TCANSignal* const)&TBOXTime_Hour_TBOX_8_1, FCAN.FData, value);}
  __declspec(property(get = get_TBOXTime_Hour, put = set_TBOXTime_Hour)) double TBOXTime_Hour;
  double get_TBOXTime_Minute(void) { return com.get_can_signal_value((TCANSignal* const)&TBOXTime_Minute_TBOX_8_1, FCAN.FData);}
  void set_TBOXTime_Minute(const double value) { com.set_can_signal_value((TCANSignal* const)&TBOXTime_Minute_TBOX_8_1, FCAN.FData, value);}
  __declspec(property(get = get_TBOXTime_Minute, put = set_TBOXTime_Minute)) double TBOXTime_Minute;
  double get_TBOXTime_Second(void) { return com.get_can_signal_value((TCANSignal* const)&TBOXTime_Second_TBOX_8_1, FCAN.FData);}
  void set_TBOXTime_Second(const double value) { com.set_can_signal_value((TCANSignal* const)&TBOXTime_Second_TBOX_8_1, FCAN.FData, value);}
  __declspec(property(get = get_TBOXTime_Second, put = set_TBOXTime_Second)) double TBOXTime_Second;
  double get_TBOXTime_Year(void) { return com.get_can_signal_value((TCANSignal* const)&TBOXTime_Year_TBOX_8_1, FCAN.FData);}
  void set_TBOXTime_Year(const double value) { com.set_can_signal_value((TCANSignal* const)&TBOXTime_Year_TBOX_8_1, FCAN.FData, value);}
  __declspec(property(get = get_TBOXTime_Year, put = set_TBOXTime_Year)) double TBOXTime_Year;
  double get_TBOXTime_Month(void) { return com.get_can_signal_value((TCANSignal* const)&TBOXTime_Month_TBOX_8_1, FCAN.FData);}
  void set_TBOXTime_Month(const double value) { com.set_can_signal_value((TCANSignal* const)&TBOXTime_Month_TBOX_8_1, FCAN.FData, value);}
  __declspec(property(get = get_TBOXTime_Month, put = set_TBOXTime_Month)) double TBOXTime_Month;
  double get_TBOXTime_Day(void) { return com.get_can_signal_value((TCANSignal* const)&TBOXTime_Day_TBOX_8_1, FCAN.FData);}
  void set_TBOXTime_Day(const double value) { com.set_can_signal_value((TCANSignal* const)&TBOXTime_Day_TBOX_8_1, FCAN.FData, value);}
  __declspec(property(get = get_TBOXTime_Day, put = set_TBOXTime_Day)) double TBOXTime_Day;
  double get_TBOXTime_Millisecond(void) { return com.get_can_signal_value((TCANSignal* const)&TBOXTime_Millisecond_TBOX_8_1, FCAN.FData);}
  void set_TBOXTime_Millisecond(const double value) { com.set_can_signal_value((TCANSignal* const)&TBOXTime_Millisecond_TBOX_8_1, FCAN.FData, value);}
  __declspec(property(get = get_TBOXTime_Millisecond, put = set_TBOXTime_Millisecond)) double TBOXTime_Millisecond;
  void init() { FCAN = create().FCAN; }
  TTBOX_8_1 create() { CANMsgDecl(_TBOX_8_1, cTBOX_8_1, 0, 0, 8, 686) return cTBOX_8_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message IC_1_1
extern const TCANSignal OdometerValue_IC_1_1;
struct _IC_1_1;
typedef struct _IC_1_1 TIC_1_1;
struct _IC_1_1{
  TCAN FCAN;
  double get_OdometerValue(void) { return com.get_can_signal_value((TCANSignal* const)&OdometerValue_IC_1_1, FCAN.FData);}
  void set_OdometerValue(const double value) { com.set_can_signal_value((TCANSignal* const)&OdometerValue_IC_1_1, FCAN.FData, value);}
  __declspec(property(get = get_OdometerValue, put = set_OdometerValue)) double OdometerValue;
  void init() { FCAN = create().FCAN; }
  TIC_1_1 create() { CANMsgDecl(_IC_1_1, cIC_1_1, 0, 0, 8, 656) return cIC_1_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message GW_VehConfigFile_1
extern const TCANSignal GW_VehConfigFile_SN_GW_VehConfigFile_1;
extern const TCANSignal GW_VehConfigFile_MASK_GW_VehConfigFile_1;
extern const TCANSignal GW_VehConfigFile_CONFIG_GW_VehConfigFile_1;
struct _GW_VehConfigFile_1;
typedef struct _GW_VehConfigFile_1 TGW_VehConfigFile_1;
struct _GW_VehConfigFile_1{
  TCAN FCAN;
  double get_GW_VehConfigFile_SN(void) { return com.get_can_signal_value((TCANSignal* const)&GW_VehConfigFile_SN_GW_VehConfigFile_1, FCAN.FData);}
  void set_GW_VehConfigFile_SN(const double value) { com.set_can_signal_value((TCANSignal* const)&GW_VehConfigFile_SN_GW_VehConfigFile_1, FCAN.FData, value);}
  __declspec(property(get = get_GW_VehConfigFile_SN, put = set_GW_VehConfigFile_SN)) double GW_VehConfigFile_SN;
  double get_GW_VehConfigFile_MASK(void) { return com.get_can_signal_value((TCANSignal* const)&GW_VehConfigFile_MASK_GW_VehConfigFile_1, FCAN.FData);}
  void set_GW_VehConfigFile_MASK(const double value) { com.set_can_signal_value((TCANSignal* const)&GW_VehConfigFile_MASK_GW_VehConfigFile_1, FCAN.FData, value);}
  __declspec(property(get = get_GW_VehConfigFile_MASK, put = set_GW_VehConfigFile_MASK)) double GW_VehConfigFile_MASK;
  double get_GW_VehConfigFile_CONFIG(void) { return com.get_can_signal_value((TCANSignal* const)&GW_VehConfigFile_CONFIG_GW_VehConfigFile_1, FCAN.FData);}
  void set_GW_VehConfigFile_CONFIG(const double value) { com.set_can_signal_value((TCANSignal* const)&GW_VehConfigFile_CONFIG_GW_VehConfigFile_1, FCAN.FData, value);}
  __declspec(property(get = get_GW_VehConfigFile_CONFIG, put = set_GW_VehConfigFile_CONFIG)) double GW_VehConfigFile_CONFIG;
  void init() { FCAN = create().FCAN; }
  TGW_VehConfigFile_1 create() { CANMsgDecl(_GW_VehConfigFile_1, cGW_VehConfigFile_1, 0, 0, 8, 1247) return cGW_VehConfigFile_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message GW_Config_1
extern const TCANSignal GW_OTAMode_GW_Config_1;
struct _GW_Config_1;
typedef struct _GW_Config_1 TGW_Config_1;
struct _GW_Config_1{
  TCAN FCAN;
  double get_GW_OTAMode(void) { return com.get_can_signal_value((TCANSignal* const)&GW_OTAMode_GW_Config_1, FCAN.FData);}
  void set_GW_OTAMode(const double value) { com.set_can_signal_value((TCANSignal* const)&GW_OTAMode_GW_Config_1, FCAN.FData, value);}
  __declspec(property(get = get_GW_OTAMode, put = set_GW_OTAMode)) double GW_OTAMode;
  void init() { FCAN = create().FCAN; }
  TGW_Config_1 create() { CANMsgDecl(_GW_Config_1, cGW_Config_1, 0, 0, 8, 688) return cGW_Config_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message EEM_2_1
extern const TCANSignal Checksum_EEM_2_EEM_2_1;
extern const TCANSignal EEM_DCDCLVOutputVoltageRequest_EEM_2_1;
extern const TCANSignal EEM_DCDCModeControl_EEM_2_1;
extern const TCANSignal EEM_DCDCLVSideCurrentLimit_EEM_2_1;
extern const TCANSignal EEM_DCDCLVOutputPowerReq_EEM_2_1;
extern const TCANSignal LiveCounter_EEM_2_EEM_2_1;
struct _EEM_2_1;
typedef struct _EEM_2_1 TEEM_2_1;
struct _EEM_2_1{
  TCAN FCAN;
  double get_Checksum_EEM_2(void) { return com.get_can_signal_value((TCANSignal* const)&Checksum_EEM_2_EEM_2_1, FCAN.FData);}
  void set_Checksum_EEM_2(const double value) { com.set_can_signal_value((TCANSignal* const)&Checksum_EEM_2_EEM_2_1, FCAN.FData, value);}
  __declspec(property(get = get_Checksum_EEM_2, put = set_Checksum_EEM_2)) double Checksum_EEM_2;
  double get_EEM_DCDCLVOutputVoltageRequest(void) { return com.get_can_signal_value((TCANSignal* const)&EEM_DCDCLVOutputVoltageRequest_EEM_2_1, FCAN.FData);}
  void set_EEM_DCDCLVOutputVoltageRequest(const double value) { com.set_can_signal_value((TCANSignal* const)&EEM_DCDCLVOutputVoltageRequest_EEM_2_1, FCAN.FData, value);}
  __declspec(property(get = get_EEM_DCDCLVOutputVoltageRequest, put = set_EEM_DCDCLVOutputVoltageRequest)) double EEM_DCDCLVOutputVoltageRequest;
  double get_EEM_DCDCModeControl(void) { return com.get_can_signal_value((TCANSignal* const)&EEM_DCDCModeControl_EEM_2_1, FCAN.FData);}
  void set_EEM_DCDCModeControl(const double value) { com.set_can_signal_value((TCANSignal* const)&EEM_DCDCModeControl_EEM_2_1, FCAN.FData, value);}
  __declspec(property(get = get_EEM_DCDCModeControl, put = set_EEM_DCDCModeControl)) double EEM_DCDCModeControl;
  double get_EEM_DCDCLVSideCurrentLimit(void) { return com.get_can_signal_value((TCANSignal* const)&EEM_DCDCLVSideCurrentLimit_EEM_2_1, FCAN.FData);}
  void set_EEM_DCDCLVSideCurrentLimit(const double value) { com.set_can_signal_value((TCANSignal* const)&EEM_DCDCLVSideCurrentLimit_EEM_2_1, FCAN.FData, value);}
  __declspec(property(get = get_EEM_DCDCLVSideCurrentLimit, put = set_EEM_DCDCLVSideCurrentLimit)) double EEM_DCDCLVSideCurrentLimit;
  double get_EEM_DCDCLVOutputPowerReq(void) { return com.get_can_signal_value((TCANSignal* const)&EEM_DCDCLVOutputPowerReq_EEM_2_1, FCAN.FData);}
  void set_EEM_DCDCLVOutputPowerReq(const double value) { com.set_can_signal_value((TCANSignal* const)&EEM_DCDCLVOutputPowerReq_EEM_2_1, FCAN.FData, value);}
  __declspec(property(get = get_EEM_DCDCLVOutputPowerReq, put = set_EEM_DCDCLVOutputPowerReq)) double EEM_DCDCLVOutputPowerReq;
  double get_LiveCounter_EEM_2(void) { return com.get_can_signal_value((TCANSignal* const)&LiveCounter_EEM_2_EEM_2_1, FCAN.FData);}
  void set_LiveCounter_EEM_2(const double value) { com.set_can_signal_value((TCANSignal* const)&LiveCounter_EEM_2_EEM_2_1, FCAN.FData, value);}
  __declspec(property(get = get_LiveCounter_EEM_2, put = set_LiveCounter_EEM_2)) double LiveCounter_EEM_2;
  void init() { FCAN = create().FCAN; }
  TEEM_2_1 create() { CANMsgDecl(_EEM_2_1, cEEM_2_1, 0, 0, 8, 252) return cEEM_2_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BCM1_2_1
extern const TCANSignal PowerMode_BCM1_2_1;
struct _BCM1_2_1;
typedef struct _BCM1_2_1 TBCM1_2_1;
struct _BCM1_2_1{
  TCAN FCAN;
  double get_PowerMode(void) { return com.get_can_signal_value((TCANSignal* const)&PowerMode_BCM1_2_1, FCAN.FData);}
  void set_PowerMode(const double value) { com.set_can_signal_value((TCANSignal* const)&PowerMode_BCM1_2_1, FCAN.FData, value);}
  __declspec(property(get = get_PowerMode, put = set_PowerMode)) double PowerMode;
  void init() { FCAN = create().FCAN; }
  TBCM1_2_1 create() { CANMsgDecl(_BCM1_2_1, cBCM1_2_1, 0, 0, 8, 562) return cBCM1_2_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message ABS_1_1
extern const TCANSignal Checksum_ABS_1_ABS_1_1;
extern const TCANSignal VehicleSpeed_ABS_1_1;
extern const TCANSignal LiveCounter_ABS_1_ABS_1_1;
struct _ABS_1_1;
typedef struct _ABS_1_1 TABS_1_1;
struct _ABS_1_1{
  TCAN FCAN;
  double get_Checksum_ABS_1(void) { return com.get_can_signal_value((TCANSignal* const)&Checksum_ABS_1_ABS_1_1, FCAN.FData);}
  void set_Checksum_ABS_1(const double value) { com.set_can_signal_value((TCANSignal* const)&Checksum_ABS_1_ABS_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Checksum_ABS_1, put = set_Checksum_ABS_1)) double Checksum_ABS_1;
  double get_VehicleSpeed(void) { return com.get_can_signal_value((TCANSignal* const)&VehicleSpeed_ABS_1_1, FCAN.FData);}
  void set_VehicleSpeed(const double value) { com.set_can_signal_value((TCANSignal* const)&VehicleSpeed_ABS_1_1, FCAN.FData, value);}
  __declspec(property(get = get_VehicleSpeed, put = set_VehicleSpeed)) double VehicleSpeed;
  double get_LiveCounter_ABS_1(void) { return com.get_can_signal_value((TCANSignal* const)&LiveCounter_ABS_1_ABS_1_1, FCAN.FData);}
  void set_LiveCounter_ABS_1(const double value) { com.set_can_signal_value((TCANSignal* const)&LiveCounter_ABS_1_ABS_1_1, FCAN.FData, value);}
  __declspec(property(get = get_LiveCounter_ABS_1, put = set_LiveCounter_ABS_1)) double LiveCounter_ABS_1;
  void init() { FCAN = create().FCAN; }
  TABS_1_1 create() { CANMsgDecl(_ABS_1_1, cABS_1_1, 0, 0, 8, 192) return cABS_1_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message DCDC_VersionInfo_1
extern const TCANSignal DCDC_SoftwareNumber_DCDC_VersionInfo_1;
extern const TCANSignal DCDC_HardwareRelated_ConfigID_DCDC_VersionInfo_1;
extern const TCANSignal DCDC_HardwareRelated_SuplierID_DCDC_VersionInfo_1;
struct _DCDC_VersionInfo_1;
typedef struct _DCDC_VersionInfo_1 TDCDC_VersionInfo_1;
struct _DCDC_VersionInfo_1{
  TCAN FCAN;
  double get_DCDC_SoftwareNumber(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_SoftwareNumber_DCDC_VersionInfo_1, FCAN.FData);}
  void set_DCDC_SoftwareNumber(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_SoftwareNumber_DCDC_VersionInfo_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_SoftwareNumber, put = set_DCDC_SoftwareNumber)) double DCDC_SoftwareNumber;
  double get_DCDC_HardwareRelated_ConfigID(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_HardwareRelated_ConfigID_DCDC_VersionInfo_1, FCAN.FData);}
  void set_DCDC_HardwareRelated_ConfigID(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_HardwareRelated_ConfigID_DCDC_VersionInfo_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_HardwareRelated_ConfigID, put = set_DCDC_HardwareRelated_ConfigID)) double DCDC_HardwareRelated_ConfigID;
  double get_DCDC_HardwareRelated_SuplierID(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_HardwareRelated_SuplierID_DCDC_VersionInfo_1, FCAN.FData);}
  void set_DCDC_HardwareRelated_SuplierID(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_HardwareRelated_SuplierID_DCDC_VersionInfo_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_HardwareRelated_SuplierID, put = set_DCDC_HardwareRelated_SuplierID)) double DCDC_HardwareRelated_SuplierID;
  void init() { FCAN = create().FCAN; }
  TDCDC_VersionInfo_1 create() { CANMsgDecl(_DCDC_VersionInfo_1, cDCDC_VersionInfo_1, 0, 0, 8, 1225) return cDCDC_VersionInfo_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message DCDC_2_1
extern const TCANSignal DCDC_MaxLVDCPower_DCDC_2_1;
extern const TCANSignal DCDC_LVDCPower_DCDC_2_1;
extern const TCANSignal DCDC_FaultLevel_DCDC_2_1;
extern const TCANSignal DCDC_MOSTemperature_DCDC_2_1;
extern const TCANSignal DCDC_DTC_DCDC_2_1;
struct _DCDC_2_1;
typedef struct _DCDC_2_1 TDCDC_2_1;
struct _DCDC_2_1{
  TCAN FCAN;
  double get_DCDC_MaxLVDCPower(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_MaxLVDCPower_DCDC_2_1, FCAN.FData);}
  void set_DCDC_MaxLVDCPower(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_MaxLVDCPower_DCDC_2_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_MaxLVDCPower, put = set_DCDC_MaxLVDCPower)) double DCDC_MaxLVDCPower;
  double get_DCDC_LVDCPower(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_LVDCPower_DCDC_2_1, FCAN.FData);}
  void set_DCDC_LVDCPower(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_LVDCPower_DCDC_2_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_LVDCPower, put = set_DCDC_LVDCPower)) double DCDC_LVDCPower;
  double get_DCDC_FaultLevel(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_FaultLevel_DCDC_2_1, FCAN.FData);}
  void set_DCDC_FaultLevel(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_FaultLevel_DCDC_2_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_FaultLevel, put = set_DCDC_FaultLevel)) double DCDC_FaultLevel;
  double get_DCDC_MOSTemperature(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_MOSTemperature_DCDC_2_1, FCAN.FData);}
  void set_DCDC_MOSTemperature(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_MOSTemperature_DCDC_2_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_MOSTemperature, put = set_DCDC_MOSTemperature)) double DCDC_MOSTemperature;
  double get_DCDC_DTC(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_DTC_DCDC_2_1, FCAN.FData);}
  void set_DCDC_DTC(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_DTC_DCDC_2_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_DTC, put = set_DCDC_DTC)) double DCDC_DTC;
  void init() { FCAN = create().FCAN; }
  TDCDC_2_1 create() { CANMsgDecl(_DCDC_2_1, cDCDC_2_1, 0, 0, 6, 1021) return cDCDC_2_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message DCDC_1_1
extern const TCANSignal Checksum_DCDC_1_DCDC_1_1;
extern const TCANSignal DCDC_LVSideCurrent_DCDC_1_1;
extern const TCANSignal DCDC_Mode_DCDC_1_1;
extern const TCANSignal DCDC_Status_DCDC_1_1;
extern const TCANSignal DCDC_TemperatureWarning_DCDC_1_1;
extern const TCANSignal DCDC_LVSideVoltage_DCDC_1_1;
extern const TCANSignal DCDC_HVSideCurrent_DCDC_1_1;
extern const TCANSignal DCDC_Temperature_DCDC_1_1;
extern const TCANSignal DCDC_HVSideVoltage_DCDC_1_1;
extern const TCANSignal DCDC_InterlockStatus_DCDC_1_1;
extern const TCANSignal LiveCounter_DCDC_1_DCDC_1_1;
struct _DCDC_1_1;
typedef struct _DCDC_1_1 TDCDC_1_1;
struct _DCDC_1_1{
  TCAN FCAN;
  double get_Checksum_DCDC_1(void) { return com.get_can_signal_value((TCANSignal* const)&Checksum_DCDC_1_DCDC_1_1, FCAN.FData);}
  void set_Checksum_DCDC_1(const double value) { com.set_can_signal_value((TCANSignal* const)&Checksum_DCDC_1_DCDC_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Checksum_DCDC_1, put = set_Checksum_DCDC_1)) double Checksum_DCDC_1;
  double get_DCDC_LVSideCurrent(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_LVSideCurrent_DCDC_1_1, FCAN.FData);}
  void set_DCDC_LVSideCurrent(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_LVSideCurrent_DCDC_1_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_LVSideCurrent, put = set_DCDC_LVSideCurrent)) double DCDC_LVSideCurrent;
  double get_DCDC_Mode(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_Mode_DCDC_1_1, FCAN.FData);}
  void set_DCDC_Mode(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_Mode_DCDC_1_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_Mode, put = set_DCDC_Mode)) double DCDC_Mode;
  double get_DCDC_Status(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_Status_DCDC_1_1, FCAN.FData);}
  void set_DCDC_Status(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_Status_DCDC_1_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_Status, put = set_DCDC_Status)) double DCDC_Status;
  double get_DCDC_TemperatureWarning(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_TemperatureWarning_DCDC_1_1, FCAN.FData);}
  void set_DCDC_TemperatureWarning(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_TemperatureWarning_DCDC_1_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_TemperatureWarning, put = set_DCDC_TemperatureWarning)) double DCDC_TemperatureWarning;
  double get_DCDC_LVSideVoltage(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_LVSideVoltage_DCDC_1_1, FCAN.FData);}
  void set_DCDC_LVSideVoltage(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_LVSideVoltage_DCDC_1_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_LVSideVoltage, put = set_DCDC_LVSideVoltage)) double DCDC_LVSideVoltage;
  double get_DCDC_HVSideCurrent(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_HVSideCurrent_DCDC_1_1, FCAN.FData);}
  void set_DCDC_HVSideCurrent(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_HVSideCurrent_DCDC_1_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_HVSideCurrent, put = set_DCDC_HVSideCurrent)) double DCDC_HVSideCurrent;
  double get_DCDC_Temperature(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_Temperature_DCDC_1_1, FCAN.FData);}
  void set_DCDC_Temperature(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_Temperature_DCDC_1_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_Temperature, put = set_DCDC_Temperature)) double DCDC_Temperature;
  double get_DCDC_HVSideVoltage(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_HVSideVoltage_DCDC_1_1, FCAN.FData);}
  void set_DCDC_HVSideVoltage(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_HVSideVoltage_DCDC_1_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_HVSideVoltage, put = set_DCDC_HVSideVoltage)) double DCDC_HVSideVoltage;
  double get_DCDC_InterlockStatus(void) { return com.get_can_signal_value((TCANSignal* const)&DCDC_InterlockStatus_DCDC_1_1, FCAN.FData);}
  void set_DCDC_InterlockStatus(const double value) { com.set_can_signal_value((TCANSignal* const)&DCDC_InterlockStatus_DCDC_1_1, FCAN.FData, value);}
  __declspec(property(get = get_DCDC_InterlockStatus, put = set_DCDC_InterlockStatus)) double DCDC_InterlockStatus;
  double get_LiveCounter_DCDC_1(void) { return com.get_can_signal_value((TCANSignal* const)&LiveCounter_DCDC_1_DCDC_1_1, FCAN.FData);}
  void set_LiveCounter_DCDC_1(const double value) { com.set_can_signal_value((TCANSignal* const)&LiveCounter_DCDC_1_DCDC_1_1, FCAN.FData, value);}
  __declspec(property(get = get_LiveCounter_DCDC_1, put = set_LiveCounter_DCDC_1)) double LiveCounter_DCDC_1;
  void init() { FCAN = create().FCAN; }
  TDCDC_1_1 create() { CANMsgDecl(_DCDC_1_1, cDCDC_1_1, 0, 0, 8, 251) return cDCDC_1_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message Charger_3_1
extern const TCANSignal Charger_CPVoltage_Charger_3_1;
extern const TCANSignal Charger_CPfrequency_Charger_3_1;
extern const TCANSignal Charger_FaultLevel_Charger_3_1;
extern const TCANSignal Charger_MOSTemperature_Charger_3_1;
extern const TCANSignal Charger_BusVoltage_Charger_3_1;
extern const TCANSignal Charger_CPPWMDuty_Charger_3_1;
extern const TCANSignal Charger_DTC_Charger_3_1;
struct _Charger_3_1;
typedef struct _Charger_3_1 TCharger_3_1;
struct _Charger_3_1{
  TCAN FCAN;
  double get_Charger_CPVoltage(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_CPVoltage_Charger_3_1, FCAN.FData);}
  void set_Charger_CPVoltage(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_CPVoltage_Charger_3_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_CPVoltage, put = set_Charger_CPVoltage)) double Charger_CPVoltage;
  double get_Charger_CPfrequency(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_CPfrequency_Charger_3_1, FCAN.FData);}
  void set_Charger_CPfrequency(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_CPfrequency_Charger_3_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_CPfrequency, put = set_Charger_CPfrequency)) double Charger_CPfrequency;
  double get_Charger_FaultLevel(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_FaultLevel_Charger_3_1, FCAN.FData);}
  void set_Charger_FaultLevel(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_FaultLevel_Charger_3_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_FaultLevel, put = set_Charger_FaultLevel)) double Charger_FaultLevel;
  double get_Charger_MOSTemperature(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_MOSTemperature_Charger_3_1, FCAN.FData);}
  void set_Charger_MOSTemperature(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_MOSTemperature_Charger_3_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_MOSTemperature, put = set_Charger_MOSTemperature)) double Charger_MOSTemperature;
  double get_Charger_BusVoltage(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_BusVoltage_Charger_3_1, FCAN.FData);}
  void set_Charger_BusVoltage(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_BusVoltage_Charger_3_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_BusVoltage, put = set_Charger_BusVoltage)) double Charger_BusVoltage;
  double get_Charger_CPPWMDuty(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_CPPWMDuty_Charger_3_1, FCAN.FData);}
  void set_Charger_CPPWMDuty(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_CPPWMDuty_Charger_3_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_CPPWMDuty, put = set_Charger_CPPWMDuty)) double Charger_CPPWMDuty;
  double get_Charger_DTC(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_DTC_Charger_3_1, FCAN.FData);}
  void set_Charger_DTC(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_DTC_Charger_3_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_DTC, put = set_Charger_DTC)) double Charger_DTC;
  void init() { FCAN = create().FCAN; }
  TCharger_3_1 create() { CANMsgDecl(_Charger_3_1, cCharger_3_1, 0, 0, 8, 1006) return cCharger_3_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message Charger_2_1
extern const TCANSignal Charger_ACVoltage_Charger_2_1;
extern const TCANSignal Charger_ACCurrent_Charger_2_1;
extern const TCANSignal Charger_ACPhase_Charger_2_1;
extern const TCANSignal Charger_ACPower_Charger_2_1;
struct _Charger_2_1;
typedef struct _Charger_2_1 TCharger_2_1;
struct _Charger_2_1{
  TCAN FCAN;
  double get_Charger_ACVoltage(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_ACVoltage_Charger_2_1, FCAN.FData);}
  void set_Charger_ACVoltage(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_ACVoltage_Charger_2_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_ACVoltage, put = set_Charger_ACVoltage)) double Charger_ACVoltage;
  double get_Charger_ACCurrent(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_ACCurrent_Charger_2_1, FCAN.FData);}
  void set_Charger_ACCurrent(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_ACCurrent_Charger_2_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_ACCurrent, put = set_Charger_ACCurrent)) double Charger_ACCurrent;
  double get_Charger_ACPhase(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_ACPhase_Charger_2_1, FCAN.FData);}
  void set_Charger_ACPhase(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_ACPhase_Charger_2_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_ACPhase, put = set_Charger_ACPhase)) double Charger_ACPhase;
  double get_Charger_ACPower(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_ACPower_Charger_2_1, FCAN.FData);}
  void set_Charger_ACPower(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_ACPower_Charger_2_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_ACPower, put = set_Charger_ACPower)) double Charger_ACPower;
  void init() { FCAN = create().FCAN; }
  TCharger_2_1 create() { CANMsgDecl(_Charger_2_1, cCharger_2_1, 0, 0, 8, 734) return cCharger_2_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message Charger_1_1
extern const TCANSignal Checksum_Charger_1_Charger_1_1;
extern const TCANSignal Charger_DCVoltage_Charger_1_1;
extern const TCANSignal Charger_Status_Charger_1_1;
extern const TCANSignal Charger_CPStatus_Charger_1_1;
extern const TCANSignal Charger_DCCurrent_Charger_1_1;
extern const TCANSignal Charger_S2SwitchStatus_Charger_1_1;
extern const TCANSignal Charger_ACSupply_Status_Charger_1_1;
extern const TCANSignal Charger_Mode_Charger_1_1;
extern const TCANSignal Charger_Temperature_Charger_1_1;
extern const TCANSignal Charger_MaxOutputPower_Charger_1_1;
extern const TCANSignal Charger_ChargeLockDriveSt_AC_Charger_1_1;
extern const TCANSignal Charger_ChargeLockErrorSt_AC_Charger_1_1;
extern const TCANSignal Charger_ChargeLockSt_AC_Charger_1_1;
extern const TCANSignal LiveCounter_Charger_1_Charger_1_1;
struct _Charger_1_1;
typedef struct _Charger_1_1 TCharger_1_1;
struct _Charger_1_1{
  TCAN FCAN;
  double get_Checksum_Charger_1(void) { return com.get_can_signal_value((TCANSignal* const)&Checksum_Charger_1_Charger_1_1, FCAN.FData);}
  void set_Checksum_Charger_1(const double value) { com.set_can_signal_value((TCANSignal* const)&Checksum_Charger_1_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Checksum_Charger_1, put = set_Checksum_Charger_1)) double Checksum_Charger_1;
  double get_Charger_DCVoltage(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_DCVoltage_Charger_1_1, FCAN.FData);}
  void set_Charger_DCVoltage(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_DCVoltage_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_DCVoltage, put = set_Charger_DCVoltage)) double Charger_DCVoltage;
  double get_Charger_Status(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_Status_Charger_1_1, FCAN.FData);}
  void set_Charger_Status(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_Status_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_Status, put = set_Charger_Status)) double Charger_Status;
  double get_Charger_CPStatus(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_CPStatus_Charger_1_1, FCAN.FData);}
  void set_Charger_CPStatus(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_CPStatus_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_CPStatus, put = set_Charger_CPStatus)) double Charger_CPStatus;
  double get_Charger_DCCurrent(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_DCCurrent_Charger_1_1, FCAN.FData);}
  void set_Charger_DCCurrent(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_DCCurrent_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_DCCurrent, put = set_Charger_DCCurrent)) double Charger_DCCurrent;
  double get_Charger_S2SwitchStatus(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_S2SwitchStatus_Charger_1_1, FCAN.FData);}
  void set_Charger_S2SwitchStatus(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_S2SwitchStatus_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_S2SwitchStatus, put = set_Charger_S2SwitchStatus)) double Charger_S2SwitchStatus;
  double get_Charger_ACSupply_Status(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_ACSupply_Status_Charger_1_1, FCAN.FData);}
  void set_Charger_ACSupply_Status(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_ACSupply_Status_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_ACSupply_Status, put = set_Charger_ACSupply_Status)) double Charger_ACSupply_Status;
  double get_Charger_Mode(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_Mode_Charger_1_1, FCAN.FData);}
  void set_Charger_Mode(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_Mode_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_Mode, put = set_Charger_Mode)) double Charger_Mode;
  double get_Charger_Temperature(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_Temperature_Charger_1_1, FCAN.FData);}
  void set_Charger_Temperature(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_Temperature_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_Temperature, put = set_Charger_Temperature)) double Charger_Temperature;
  double get_Charger_MaxOutputPower(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_MaxOutputPower_Charger_1_1, FCAN.FData);}
  void set_Charger_MaxOutputPower(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_MaxOutputPower_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_MaxOutputPower, put = set_Charger_MaxOutputPower)) double Charger_MaxOutputPower;
  double get_Charger_ChargeLockDriveSt_AC(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_ChargeLockDriveSt_AC_Charger_1_1, FCAN.FData);}
  void set_Charger_ChargeLockDriveSt_AC(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_ChargeLockDriveSt_AC_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_ChargeLockDriveSt_AC, put = set_Charger_ChargeLockDriveSt_AC)) double Charger_ChargeLockDriveSt_AC;
  double get_Charger_ChargeLockErrorSt_AC(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_ChargeLockErrorSt_AC_Charger_1_1, FCAN.FData);}
  void set_Charger_ChargeLockErrorSt_AC(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_ChargeLockErrorSt_AC_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_ChargeLockErrorSt_AC, put = set_Charger_ChargeLockErrorSt_AC)) double Charger_ChargeLockErrorSt_AC;
  double get_Charger_ChargeLockSt_AC(void) { return com.get_can_signal_value((TCANSignal* const)&Charger_ChargeLockSt_AC_Charger_1_1, FCAN.FData);}
  void set_Charger_ChargeLockSt_AC(const double value) { com.set_can_signal_value((TCANSignal* const)&Charger_ChargeLockSt_AC_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_Charger_ChargeLockSt_AC, put = set_Charger_ChargeLockSt_AC)) double Charger_ChargeLockSt_AC;
  double get_LiveCounter_Charger_1(void) { return com.get_can_signal_value((TCANSignal* const)&LiveCounter_Charger_1_Charger_1_1, FCAN.FData);}
  void set_LiveCounter_Charger_1(const double value) { com.set_can_signal_value((TCANSignal* const)&LiveCounter_Charger_1_Charger_1_1, FCAN.FData, value);}
  __declspec(property(get = get_LiveCounter_Charger_1, put = set_LiveCounter_Charger_1)) double LiveCounter_Charger_1;
  void init() { FCAN = create().FCAN; }
  TCharger_1_1 create() { CANMsgDecl(_Charger_1_1, cCharger_1_1, 0, 0, 8, 731) return cCharger_1_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// LIN Databases
// FlexRay Databases
#endif
