#include "Database.h"

// CAN Databases
// CAN Message HCU_1_6
CANSgnDecl(Checksum_HCU_1_6_HCU_1_6_1, 0, true, 0, 8, 1, 0)
CANSgnDecl(HCU_DCDCPrechargeCurrentLimit_HCU_1_6_1, 0, true, 8, 6, 3, 0)
CANSgnDecl(HCU_DCDCEnable_HCU_1_6_1, 0, true, 14, 2, 1, 0)
CANSgnDecl(HCU_DCDCHVOutputVoltageRequest_HCU_1_6_1, 0, true, 22, 10, 1, 0)
CANSgnDecl(HCU_DischargePermission_HCU_1_6_1, 0, true, 41, 1, 1, 0)
CANSgnDecl(HCU_ChargeLockCmd_AC_HCU_1_6_1, 0, true, 43, 2, 1, 0)
CANSgnDecl(LiveCounter_HCU_1_6_HCU_1_6_1, 0, true, 60, 4, 1, 0)
// CAN Message EEM_2
CANSgnDecl(Checksum_EEM_2_EEM_2_1, 0, true, 0, 8, 1, 0)
CANSgnDecl(EEM_DCDCLVOutputVoltageRequest_EEM_2_1, 0, true, 8, 8, 0.1, 0)
CANSgnDecl(EEM_DCDCModeControl_EEM_2_1, 0, true, 20, 2, 1, 0)
CANSgnDecl(EEM_DCDCLVSideCurrentLimit_EEM_2_1, 0, true, 23, 9, 1, 0)
CANSgnDecl(EEM_DCDCLVOutputPowerReq_EEM_2_1, 0, true, 32, 6, 0.1, 0)
CANSgnDecl(LiveCounter_EEM_2_EEM_2_1, 0, true, 60, 4, 1, 0)
// LIN Databases
// FlexRay Databases
