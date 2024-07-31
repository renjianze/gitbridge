#include "Database.h"

// CAN Databases
// CAN Message BMS_7
CANSgnDecl(BMS_BatteryPackSOC_BMS_7_1, 0, true, 24, 10, 0.1, 0)
// CAN Message BMS_4
CANSgnDecl(BMS_ChargeCurrentRequest_BMS_4_1, 0, true, 8, 10, 0.1, -100)
CANSgnDecl(BMS_ChargerModeRequest_BMS_4_1, 0, true, 20, 2, 1, 0)
CANSgnDecl(BMS_ChargeVoltageRequest_BMS_4_1, 0, true, 22, 10, 1, 0)
// CAN Message BMS_1
CANSgnDecl(BMS_BatteryPackCurrent_BMS_1_1, 0, true, 24, 15, 0.1, -1600)
// CAN Message HCU_1_8
CANSgnDecl(HCU_ChargeConnectStatus_HCU_1_8_1, 0, true, 36, 4, 1, 0)
// CAN Message HCU_1_6
CANSgnDecl(Checksum_HCU_1_6_HCU_1_6_1, 0, true, 0, 8, 1, 0)
CANSgnDecl(HCU_DCDCPrechargeCurrentLimit_HCU_1_6_1, 0, true, 8, 6, 3, 0)
CANSgnDecl(HCU_DCDCEnable_HCU_1_6_1, 0, true, 14, 2, 1, 0)
CANSgnDecl(HCU_DCDCHVOutputVoltageRequest_HCU_1_6_1, 0, true, 22, 10, 1, 0)
CANSgnDecl(HCU_DischargePermission_HCU_1_6_1, 0, true, 41, 1, 1, 0)
CANSgnDecl(HCU_ChargeLockCmd_AC_HCU_1_6_1, 0, true, 43, 2, 1, 0)
CANSgnDecl(LiveCounter_HCU_1_6_HCU_1_6_1, 0, true, 60, 4, 1, 0)
// CAN Message TBOX_8
CANSgnDecl(TBOXTime_Hour_TBOX_8_1, 0, true, 0, 5, 1, 0)
CANSgnDecl(TBOXTime_Minute_TBOX_8_1, 0, true, 8, 6, 1, 0)
CANSgnDecl(TBOXTime_Second_TBOX_8_1, 0, true, 16, 6, 1, 0)
CANSgnDecl(TBOXTime_Year_TBOX_8_1, 0, true, 24, 7, 1, 2011)
CANSgnDecl(TBOXTime_Month_TBOX_8_1, 0, true, 32, 4, 1, 1)
CANSgnDecl(TBOXTime_Day_TBOX_8_1, 0, true, 40, 7, 1, 1)
CANSgnDecl(TBOXTime_Millisecond_TBOX_8_1, 0, true, 48, 10, 1, 0)
// CAN Message IC_1
CANSgnDecl(OdometerValue_IC_1_1, 0, true, 24, 25, 0.1, 0)
// CAN Message GW_VehConfigFile
CANSgnDecl(GW_VehConfigFile_SN_GW_VehConfigFile_1, 0, true, 0, 8, 1, 0)
CANSgnDecl(GW_VehConfigFile_MASK_GW_VehConfigFile_1, 0, true, 8, 8, 1, 0)
CANSgnDecl(GW_VehConfigFile_CONFIG_GW_VehConfigFile_1, 0, true, 16, 48, 1, 0)
// CAN Message GW_Config
CANSgnDecl(GW_OTAMode_GW_Config_1, 0, true, 16, 3, 1, 0)
// CAN Message EEM_2
CANSgnDecl(Checksum_EEM_2_EEM_2_1, 0, true, 0, 8, 1, 0)
CANSgnDecl(EEM_DCDCLVOutputVoltageRequest_EEM_2_1, 0, true, 8, 8, 0.1, 0)
CANSgnDecl(EEM_DCDCModeControl_EEM_2_1, 0, true, 20, 2, 1, 0)
CANSgnDecl(EEM_DCDCLVSideCurrentLimit_EEM_2_1, 0, true, 23, 9, 1, 0)
CANSgnDecl(EEM_DCDCLVOutputPowerReq_EEM_2_1, 0, true, 32, 6, 0.1, 0)
CANSgnDecl(LiveCounter_EEM_2_EEM_2_1, 0, true, 60, 4, 1, 0)
// CAN Message BCM1_2
CANSgnDecl(PowerMode_BCM1_2_1, 0, true, 4, 4, 1, 0)
// CAN Message ABS_1
CANSgnDecl(Checksum_ABS_1_ABS_1_1, 0, true, 0, 8, 1, 0)
CANSgnDecl(VehicleSpeed_ABS_1_1, 0, true, 40, 15, 0.01, 0)
CANSgnDecl(LiveCounter_ABS_1_ABS_1_1, 0, true, 60, 4, 1, 0)
// CAN Message DCDC_VersionInfo
CANSgnDecl(DCDC_SoftwareNumber_DCDC_VersionInfo_1, 0, true, 0, 32, 1, 0)
CANSgnDecl(DCDC_HardwareRelated_ConfigID_DCDC_VersionInfo_1, 0, true, 32, 4, 1, 0)
CANSgnDecl(DCDC_HardwareRelated_SuplierID_DCDC_VersionInfo_1, 0, true, 36, 4, 1, 0)
// CAN Message DCDC_2
CANSgnDecl(DCDC_MaxLVDCPower_DCDC_2_1, 0, true, 8, 5, 0.1, 0)
CANSgnDecl(DCDC_LVDCPower_DCDC_2_1, 0, true, 16, 5, 0.1, 0)
CANSgnDecl(DCDC_FaultLevel_DCDC_2_1, 0, true, 21, 2, 1, 0)
CANSgnDecl(DCDC_MOSTemperature_DCDC_2_1, 0, true, 24, 12, 0.1, -40)
CANSgnDecl(DCDC_DTC_DCDC_2_1, 0, true, 40, 8, 1, 0)
// CAN Message DCDC_1
CANSgnDecl(Checksum_DCDC_1_DCDC_1_1, 0, true, 0, 8, 1, 0)
CANSgnDecl(DCDC_LVSideCurrent_DCDC_1_1, 0, true, 8, 10, 1, -400)
CANSgnDecl(DCDC_Mode_DCDC_1_1, 0, true, 18, 2, 1, 0)
CANSgnDecl(DCDC_Status_DCDC_1_1, 0, true, 20, 3, 1, 0)
CANSgnDecl(DCDC_TemperatureWarning_DCDC_1_1, 0, true, 23, 1, 1, 0)
CANSgnDecl(DCDC_LVSideVoltage_DCDC_1_1, 0, true, 24, 8, 0.1, 0)
CANSgnDecl(DCDC_HVSideCurrent_DCDC_1_1, 0, true, 32, 8, 0.2, -20)
CANSgnDecl(DCDC_Temperature_DCDC_1_1, 0, true, 40, 8, 1, -40)
CANSgnDecl(DCDC_HVSideVoltage_DCDC_1_1, 0, true, 48, 10, 1, 0)
CANSgnDecl(DCDC_InterlockStatus_DCDC_1_1, 0, true, 58, 2, 1, 0)
CANSgnDecl(LiveCounter_DCDC_1_DCDC_1_1, 0, true, 60, 4, 1, 0)
// CAN Message Charger_3
CANSgnDecl(Charger_CPVoltage_Charger_3_1, 0, true, 0, 8, 0.1, 0)
CANSgnDecl(Charger_CPfrequency_Charger_3_1, 0, true, 8, 7, 10, 0)
CANSgnDecl(Charger_FaultLevel_Charger_3_1, 0, true, 21, 2, 1, 0)
CANSgnDecl(Charger_MOSTemperature_Charger_3_1, 0, true, 24, 12, 0.1, -40)
CANSgnDecl(Charger_BusVoltage_Charger_3_1, 0, true, 38, 10, 1, 0)
CANSgnDecl(Charger_CPPWMDuty_Charger_3_1, 0, true, 48, 7, 1, 0)
CANSgnDecl(Charger_DTC_Charger_3_1, 0, true, 56, 8, 1, 0)
// CAN Message Charger_2
CANSgnDecl(Charger_ACVoltage_Charger_2_1, 0, true, 8, 10, 1, 0)
CANSgnDecl(Charger_ACCurrent_Charger_2_1, 0, true, 20, 10, 0.1, 0)
CANSgnDecl(Charger_ACPhase_Charger_2_1, 0, true, 30, 2, 1, 0)
CANSgnDecl(Charger_ACPower_Charger_2_1, 0, true, 32, 8, 0.1, 0)
// CAN Message Charger_1
CANSgnDecl(Checksum_Charger_1_Charger_1_1, 0, true, 0, 8, 1, 0)
CANSgnDecl(Charger_DCVoltage_Charger_1_1, 0, true, 8, 10, 1, 0)
CANSgnDecl(Charger_Status_Charger_1_1, 0, true, 18, 3, 1, 0)
CANSgnDecl(Charger_CPStatus_Charger_1_1, 0, true, 22, 2, 1, 0)
CANSgnDecl(Charger_DCCurrent_Charger_1_1, 0, true, 24, 10, 0.1, 0)
CANSgnDecl(Charger_S2SwitchStatus_Charger_1_1, 0, true, 34, 1, 1, 0)
CANSgnDecl(Charger_ACSupply_Status_Charger_1_1, 0, true, 36, 2, 1, 0)
CANSgnDecl(Charger_Mode_Charger_1_1, 0, true, 38, 2, 1, 0)
CANSgnDecl(Charger_Temperature_Charger_1_1, 0, true, 40, 8, 1, -40)
CANSgnDecl(Charger_MaxOutputPower_Charger_1_1, 0, true, 48, 8, 0.1, 0)
CANSgnDecl(Charger_ChargeLockDriveSt_AC_Charger_1_1, 0, true, 56, 2, 1, 0)
CANSgnDecl(Charger_ChargeLockErrorSt_AC_Charger_1_1, 0, true, 58, 1, 1, 0)
CANSgnDecl(Charger_ChargeLockSt_AC_Charger_1_1, 0, true, 59, 1, 1, 0)
CANSgnDecl(LiveCounter_Charger_1_Charger_1_1, 0, true, 60, 4, 1, 0)
// LIN Databases
// FlexRay Databases
