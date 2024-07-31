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
  void init() { FCAN = create().FCAN; }
  TCharger_1_1 create() { CANMsgDecl(_Charger_1_1, cCharger_1_1, 0, 0, 8, 731) return cCharger_1_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// LIN Databases
// FlexRay Databases
#endif
