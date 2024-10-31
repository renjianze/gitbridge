/*
 * File: SwcDCDC_FaultConfirm_1.c
 *
 * Code generated for Simulink model 'SwcDCDC_FaultConfirm_1'.
 *
 * Model version                  : v1.5
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu Oct 31 18:18:28 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: NXP->Cortex-M4
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SwcDCDC_FaultConfirm_1.h"
#include "rtwtypes.h"
#include <math.h>

/* Named constants for Chart: '<S4>/Chart' */
#define SwcDCDC_Faul_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define SwcDCDC_FaultC_IN_Fault_confirm ((uint8_T)1U)
#define SwcDCDC_FaultC_IN_Fault_setting ((uint8_T)2U)
#define SwcDCDC_FaultCo_IN_Loop_confirm ((uint8_T)2U)
#define SwcDCDC_FaultConf_IN_Loop_Clear ((uint8_T)3U)
#define SwcDCDC_FaultConfirm_1_IN_Loop ((uint8_T)1U)
#define SwcDCDC_FaultConfirm_1_IN_init ((uint8_T)4U)

/* Named constants for Chart: '<S4>/Chart1' */
#define SwcDCDC_FaultC_IN_Fault_Confirm ((uint8_T)1U)
#define SwcDCDC_FaultConfirm_1_IN_Wait ((uint8_T)2U)
#define SwcDCDC_FaultConfirm_1_IN_Wait1 ((uint8_T)3U)
#define SwcDCDC_FaultConfirm_1_IN_Wait2 ((uint8_T)4U)
#define SwcDCDC_FaultConfirm__IN_init_e ((uint8_T)5U)

/* Named constants for Chart: '<S4>/Chart12' */
#define SwcDCDC_FaultConfirm_1_IN_Judge ((uint8_T)1U)
#define SwcDCDC_FaultConfirm__IN_init_c ((uint8_T)3U)

/* Named constants for Chart: '<S4>/Chart20' */
#define SwcDCDC_Faul_IN_Fault_confirm_j ((uint8_T)2U)
#define SwcDCDC_Faul_IN_Fault_setting_m ((uint8_T)3U)
#define SwcDCDC_FaultConf_IN_FaultClear ((uint8_T)1U)
#define SwcDCDC_FaultConfirm__IN_Wait_e ((uint8_T)3U)

/* Named constants for Chart: '<S4>/Chart23' */
#define SwcDCDC_FaultCon_IN_FaultClear1 ((uint8_T)1U)

/* Named constants for Chart: '<S4>/Chart26' */
#define SwcDCDC_FaultConfi_IN_WaitReset ((uint8_T)3U)
#define SwcDCDC_FaultConfirm_1_IN_Reset ((uint8_T)2U)
#define SwcDCDC_FaultConfirm_IN_Initial ((uint8_T)1U)

/* Exported data definition */

/* Definition for custom storage class: Default */
uint16_T U16_DCDC_FaultConfirmDelayTime = 5000U;/* Referenced by:
                                                 * '<S3>/Constant4'
                                                 * '<S3>/Constant6'
                                                 */
uint8_T U8_DCDC_CMD_Work_BuckEnable = 2U;/* Referenced by: '<S9>/Constant' */
uint8_T U8_Dsp_TxPcbOutVolt1PrecisionFactor = 10U;/* Referenced by: '<S3>/Constant' */
uint8_T U8_IPCF_AgingMode = 1U;        /* Referenced by: '<S7>/Constant' */
uint8_T U8_Kl30_DSPLimit = 15U;        /* Referenced by: '<S5>/Constant' */
uint8_T U8_Kl30_DSPLimit2 = 10U;       /* Referenced by: '<S6>/Constant' */

/* Block signals (default storage) */
B_SwcDCDC_FaultConfirm_1_T SwcDCDC_FaultConfirm_1_B;

/* Block states (default storage) */
DW_SwcDCDC_FaultConfirm_1_T SwcDCDC_FaultConfirm_1_DW;

/* Real-time model */
static RT_MODEL_SwcDCDC_FaultConfirm_T SwcDCDC_FaultConfirm_1_M_;
RT_MODEL_SwcDCDC_FaultConfirm_T *const SwcDCDC_FaultConfirm_1_M =
  &SwcDCDC_FaultConfirm_1_M_;

/* Model step function */
void SwcDCDC_FaultConfirm_1_step(void)
{
  int32_T rtb_DCDC_HW_FaultReset;
  int32_T rtb_ResetZone;
  int16_T rtb_Subtract;
  uint16_T rtb_Abs;
  boolean_T guard1 = false;

  /* Chart: '<S4>/Chart12' incorporates:
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_p5 < 16383U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_p5++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c13_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c13_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c13_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm__IN_init_c;
    SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleOverCur_Flag = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c13_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConfirm_1_IN_Judge:
      SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleOverCur_Flag = 1.0;
      if ((get_IPCF_DCDCFaultCode() & 128U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c13_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_p5 = 0U;
      }
      break;

     case SwcDCDC_FaultConfirm_1_IN_Wait:
      if ((get_IPCF_DCDCFaultCode() & 128U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c13_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_c;
        SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleOverCur_Flag = 0.0;
      } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_p5 >= 12000U) {
        SwcDCDC_FaultConfirm_1_DW.is_c13_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Judge;
        SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleOverCur_Flag = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleOverCur_Flag = 0.0;
      if ((get_IPCF_DCDCFaultCode() & 128U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c13_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_p5 = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart12' */

  /* Chart: '<S4>/Chart' incorporates:
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_pq < 8191U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_pq++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c3_SwcDCDC_FaultConfi == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c3_SwcDCDC_FaultConfi = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c3_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i_jt = 0U;
    set_DCDC_HS_SW_MultipleOverCur(0.0);
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c3_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultC_IN_Fault_confirm:
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_pq >= 6000U) {
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_h =
          SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
        SwcDCDC_FaultConfirm_1_DW.is_c3_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_Loop_Clear;
        SwcDCDC_FaultConfirm_1_DW.i_jt = 0U;
      } else if (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_h ==
                 SwcDCDC_FaultConfirm_1_IN_Loop) {
        if ((SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleOverCur_Flag == 1.0) ||
            (SwcDCDC_FaultConfirm_1_DW.i_jt >= 5)) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_h =
            SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
          SwcDCDC_FaultConfirm_1_DW.is_c3_SwcDCDC_FaultConfirm_1 =
            SwcDCDC_FaultC_IN_Fault_setting;
          set_DCDC_HS_SW_MultipleOverCur(1.0);
        } else if ((get_IPCF_DCDCFaultCode() & 128U) == 0U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_h =
            SwcDCDC_FaultCo_IN_Loop_confirm;
        }

        /* case IN_Loop_confirm: */
      } else if ((get_IPCF_DCDCFaultCode() & 128U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_h =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_jt++;
      }
      break;

     case SwcDCDC_FaultC_IN_Fault_setting:
      set_DCDC_HS_SW_MultipleOverCur(1.0);
      if ((get_IPCF_DCDCFaultCode() & 128U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c3_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i_jt = 0U;
        set_DCDC_HS_SW_MultipleOverCur(0.0);
      }
      break;

     case SwcDCDC_FaultConf_IN_Loop_Clear:
      if ((get_IPCF_DCDCFaultCode() & 128U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c3_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_pq = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_h =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_jt++;
      }
      break;

     default:
      /* case IN_init: */
      set_DCDC_HS_SW_MultipleOverCur(0.0);
      if ((get_IPCF_DCDCFaultCode() & 128U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c3_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_pq = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_h =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_jt++;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart' */

  /* Product: '<S3>/Divide' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/IPCF_DCDC_LS_vol'
   */
  if (U8_Dsp_TxPcbOutVolt1PrecisionFactor == 0U) {
    rtb_Abs = MAX_uint16_T;

    /* Divide by zero handler */
  } else {
    rtb_Abs = (uint16_T)((uint32_T)get_IPCF_DCDC_LS_vol() /
                         U8_Dsp_TxPcbOutVolt1PrecisionFactor);
  }

  /* Sum: '<S3>/Subtract' incorporates:
   *  Inport: '<Root>/KL30_KL30Vol'
   *  Product: '<S3>/Divide'
   */
  rtb_Subtract = (int16_T)((int16_T)get_KL30_KL30Vol() - (int16_T)rtb_Abs);

  /* Abs: '<S3>/Abs' */
  if (rtb_Subtract < 0) {
    rtb_Abs = (uint16_T)-rtb_Subtract;
  } else {
    rtb_Abs = (uint16_T)rtb_Subtract;
  }

  /* End of Abs: '<S3>/Abs' */

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant4'
   *  Constant: '<S3>/Constant1'
   *  Constant: '<S3>/Constant6'
   *  Constant: '<S5>/Constant'
   *  Constant: '<S7>/Constant'
   *  Constant: '<S8>/Constant'
   *  Constant: '<S9>/Constant'
   *  Inport: '<Root>/CAN_HCU_DCDCEnable'
   *  Inport: '<Root>/DCDC_LVSideCurrent'
   *  Inport: '<Root>/IPCF_AgingStatus'
   *  Logic: '<S3>/Logical Operator'
   *  MinMax: '<S11>/MinMax'
   *  RelationalOperator: '<S10>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   *  RelationalOperator: '<S8>/Compare'
   *  RelationalOperator: '<S9>/Compare'
   *  Sum: '<S11>/Add'
   *  Sum: '<S11>/Add1'
   *  Sum: '<S3>/Subtract1'
   *  UnitDelay: '<S11>/UnitDelay'
   */
  if ((rtb_Abs > U8_Kl30_DSPLimit) && (get_CAN_HCU_DCDCEnable() ==
       U8_DCDC_CMD_Work_BuckEnable) && (get_IPCF_AgingStatus() !=
       U8_IPCF_AgingMode) && (get_DCDC_LVSideCurrent() - 400.0 <= 8.0)) {
    SwcDCDC_FaultConfirm_1_DW.UnitDelay_DSTATE = fminf((uint16_T)
      (U16_DCDC_FaultConfirmDelayTime + 10U),
      SwcDCDC_FaultConfirm_1_DW.UnitDelay_DSTATE + 10.0F);
  } else {
    SwcDCDC_FaultConfirm_1_DW.UnitDelay_DSTATE = 0.0F;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/Constant'
   *  Constant: '<S12>/Constant4'
   *  Constant: '<S3>/Constant4'
   *  Constant: '<S6>/Constant'
   *  MinMax: '<S12>/MinMax'
   *  RelationalOperator: '<S6>/Compare'
   *  Sum: '<S12>/Add'
   *  Sum: '<S12>/Add1'
   *  UnitDelay: '<S12>/UnitDelay'
   */
  if (rtb_Abs <= U8_Kl30_DSPLimit2) {
    SwcDCDC_FaultConfirm_1_DW.UnitDelay_DSTATE_l = fminf((uint16_T)
      (U16_DCDC_FaultConfirmDelayTime + 10U),
      SwcDCDC_FaultConfirm_1_DW.UnitDelay_DSTATE_l + 10.0F);
  } else {
    SwcDCDC_FaultConfirm_1_DW.UnitDelay_DSTATE_l = 0.0F;
  }

  /* End of Switch: '<S12>/Switch' */

  /* Outputs for Atomic SubSystem: '<S3>/S_R_contravene' */
  /* Logic: '<S13>/Logical Operator1' incorporates:
   *  Constant: '<S11>/Constant4'
   *  Constant: '<S12>/Constant4'
   *  Constant: '<S3>/Constant4'
   *  Constant: '<S3>/Constant6'
   *  Logic: '<S13>/Logical Operator'
   *  Logic: '<S13>/Logical Operator3'
   *  RelationalOperator: '<S11>/Relational Operator6'
   *  RelationalOperator: '<S12>/Relational Operator6'
   *  Sum: '<S11>/Add1'
   *  Sum: '<S12>/Add1'
   *  UnitDelay: '<S11>/UnitDelay'
   *  UnitDelay: '<S12>/UnitDelay'
   */
  set_DCDC_LS_OpenCircuit(((uint16_T)(U16_DCDC_FaultConfirmDelayTime + 10U) <=
    SwcDCDC_FaultConfirm_1_DW.UnitDelay_DSTATE) || ((!((uint16_T)
    (U16_DCDC_FaultConfirmDelayTime + 10U) <=
    SwcDCDC_FaultConfirm_1_DW.UnitDelay_DSTATE_l)) && get_DCDC_LS_OpenCircuit()));

  /* End of Outputs for SubSystem: '<S3>/S_R_contravene' */

  /* Chart: '<S4>/Chart14' incorporates:
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_ci < 16383U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_ci++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c15_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c15_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c15_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm__IN_init_c;
    SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleOverVol_Flag = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c15_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConfirm_1_IN_Judge:
      SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleOverVol_Flag = 1.0;
      if ((get_IPCF_DCDCFaultCode() & 1U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c15_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_ci = 0U;
      }
      break;

     case SwcDCDC_FaultConfirm_1_IN_Wait:
      if ((get_IPCF_DCDCFaultCode() & 1U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c15_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_c;
        SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleOverVol_Flag = 0.0;
      } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_ci >= 12000U) {
        SwcDCDC_FaultConfirm_1_DW.is_c15_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Judge;
        SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleOverVol_Flag = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleOverVol_Flag = 0.0;
      if ((get_IPCF_DCDCFaultCode() & 1U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c15_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_ci = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart14' */

  /* Chart: '<S4>/Chart2' incorporates:
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_h < 8191U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_h++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c2_SwcDCDC_FaultConfi == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c2_SwcDCDC_FaultConfi = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c2_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i_n = 0U;
    set_DCDC_LS_SW_MultipleOverVol(0.0);
  } else {
    guard1 = false;
    switch (SwcDCDC_FaultConfirm_1_DW.is_c2_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultC_IN_Fault_confirm:
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_h >= 6000U) {
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c3 =
          SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
        SwcDCDC_FaultConfirm_1_DW.is_c2_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_Loop_Clear;
        SwcDCDC_FaultConfirm_1_DW.i_n = 0U;
      } else {
        switch (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c3) {
         case SwcDCDC_FaultConfirm_1_IN_Loop:
          if (SwcDCDC_FaultConfirm_1_DW.i_n >= 5) {
            guard1 = true;
          } else if ((get_IPCF_DCDCFaultCode() & 1U) == 0U) {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c3 =
              SwcDCDC_FaultCo_IN_Loop_confirm;
          } else if (SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleOverVol_Flag ==
                     1.0) {
            guard1 = true;
          }
          break;

         default:
          /* case IN_Loop_confirm: */
          if ((get_IPCF_DCDCFaultCode() & 1U) != 0U) {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c3 =
              SwcDCDC_FaultConfirm_1_IN_Loop;
            SwcDCDC_FaultConfirm_1_DW.i_n++;
          }
          break;
        }
      }
      break;

     case SwcDCDC_FaultC_IN_Fault_setting:
      set_DCDC_LS_SW_MultipleOverVol(1.0);
      if ((get_IPCF_DCDCFaultCode() & 1U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c2_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i_n = 0U;
        set_DCDC_LS_SW_MultipleOverVol(0.0);
      }
      break;

     case SwcDCDC_FaultConf_IN_Loop_Clear:
      if ((get_IPCF_DCDCFaultCode() & 1U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c2_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_h = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c3 =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_n++;
      }
      break;

     default:
      /* case IN_init: */
      set_DCDC_LS_SW_MultipleOverVol(0.0);
      if ((get_IPCF_DCDCFaultCode() & 1U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c2_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_h = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c3 =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_n++;
      }
      break;
    }

    if (guard1) {
      SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c3 =
        SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
      SwcDCDC_FaultConfirm_1_DW.is_c2_SwcDCDC_FaultConfirm_1 =
        SwcDCDC_FaultC_IN_Fault_setting;
      set_DCDC_LS_SW_MultipleOverVol(1.0);
    }
  }

  /* End of Chart: '<S4>/Chart2' */

  /* Chart: '<S4>/Chart23' incorporates:
   *  Constant: '<S41>/Constant'
   *  Inport: '<Root>/CAN_HCU_DCDCEnable'
   *  Inport: '<Root>/LVHV_FaultCode'
   *  RelationalOperator: '<S41>/Compare'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_da < 3U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_da++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c24_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c24_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c24_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm__IN_init_c;
    rtb_DCDC_HW_FaultReset = 0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c24_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultCon_IN_FaultClear1:
      rtb_DCDC_HW_FaultReset = 1;
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_da >= 2U) {
        SwcDCDC_FaultConfirm_1_DW.is_c24_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_c;
        rtb_DCDC_HW_FaultReset = 0;
      }
      break;

     case SwcDCDC_Faul_IN_Fault_confirm_j:
      if (get_CAN_HCU_DCDCEnable() != 1) {
        SwcDCDC_FaultConfirm_1_DW.is_c24_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultCon_IN_FaultClear1;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_da = 0U;
        rtb_DCDC_HW_FaultReset = 1;
      } else {
        rtb_DCDC_HW_FaultReset = 0;
      }
      break;

     default:
      /* case IN_init: */
      rtb_DCDC_HW_FaultReset = 0;
      if (((uint32_T)(int32_T)get_LVHV_FaultCode() & 524288U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c24_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_Faul_IN_Fault_confirm_j;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart23' */

  /* Chart: '<S4>/Chart26' incorporates:
   *  Inport: '<Root>/CAN_PowerMode'
   *  Inport: '<Root>/HVLV_FaultCode'
   *  Inport: '<Root>/KL15_KL15Volt'
   *  Inport: '<Root>/LVHV_FaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.is_active_c27_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c27_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c27_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_IN_Initial;
    rtb_ResetZone = 0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c27_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConfirm_IN_Initial:
      rtb_ResetZone = 0;
      if ((get_KL15_KL15Volt() > 60.0) && (get_CAN_PowerMode() == 4.0)) {
        SwcDCDC_FaultConfirm_1_DW.is_c27_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfi_IN_WaitReset;
      }
      break;

     case SwcDCDC_FaultConfirm_1_IN_Reset:
      rtb_ResetZone = 1;
      if (((get_KL15_KL15Volt() > 60.0) && (get_CAN_PowerMode() == 4.0)) ||
          (((get_HVLV_FaultCode() < 131072.0) || (get_HVLV_FaultCode() >
             2.097152E+6)) && ((get_LVHV_FaultCode() < 65536.0) ||
            (get_LVHV_FaultCode() > 524288.0)))) {
        SwcDCDC_FaultConfirm_1_DW.is_c27_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_IN_Initial;
        rtb_ResetZone = 0;
      }
      break;

     default:
      /* case IN_WaitReset: */
      rtb_ResetZone = 0;
      if ((get_KL15_KL15Volt() <= 60.0) && (get_CAN_PowerMode() != 4.0)) {
        SwcDCDC_FaultConfirm_1_DW.is_c27_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Reset;
        rtb_ResetZone = 1;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart26' */

  /* Chart: '<S4>/Chart20' incorporates:
   *  Inport: '<Root>/HVLV_FaultCode'
   *  Inport: '<Root>/LVHV_FaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_lf < 511U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_lf++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c21_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c21_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c21_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i_ak = 0U;
    SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_c = 0.0;
    SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_i = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c21_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConf_IN_FaultClear:
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_i = 1.0;
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_lf >= 2U) {
        SwcDCDC_FaultConfirm_1_DW.is_c21_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i_ak = 0U;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_c = 0.0;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_i = 0.0;
      }
      break;

     case SwcDCDC_Faul_IN_Fault_confirm_j:
      switch (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_ll) {
       case SwcDCDC_FaultConfirm_1_IN_Loop:
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_i = 0.0;
        if (SwcDCDC_FaultConfirm_1_DW.i_ak >= 3) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_ll =
            SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
          SwcDCDC_FaultConfirm_1_DW.is_c21_SwcDCDC_FaultConfirm_1 =
            SwcDCDC_Faul_IN_Fault_setting_m;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_c = 1.0;
        } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_lf >= 300U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_ll =
            SwcDCDC_FaultCo_IN_Loop_confirm;
          SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_lf = 0U;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_i = 1.0;
        }
        break;

       case SwcDCDC_FaultCo_IN_Loop_confirm:
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_i = 1.0;
        if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_lf >= 2U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_ll =
            SwcDCDC_FaultConfirm__IN_Wait_e;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_i = 0.0;
        }
        break;

       default:
        /* case IN_Wait: */
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_i = 0.0;
        if ((((uint32_T)(int32_T)get_HVLV_FaultCode() & 131072U) != 0U) ||
            (((uint32_T)(int32_T)get_LVHV_FaultCode() & 65536U) != 0U)) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_ll =
            SwcDCDC_FaultConfirm_1_IN_Loop;
          SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_lf = 0U;
          SwcDCDC_FaultConfirm_1_DW.i_ak++;
        }
        break;
      }
      break;

     case SwcDCDC_Faul_IN_Fault_setting_m:
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_c = 1.0;
      if (rtb_ResetZone == 1) {
        SwcDCDC_FaultConfirm_1_DW.is_c21_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_FaultClear;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_lf = 0U;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_i = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_c = 0.0;
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_i = 0.0;
      if ((((uint32_T)(int32_T)get_HVLV_FaultCode() & 131072U) != 0U) ||
          (((uint32_T)(int32_T)get_LVHV_FaultCode() & 65536U) != 0U)) {
        SwcDCDC_FaultConfirm_1_DW.is_c21_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_Faul_IN_Fault_confirm_j;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_ll =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_lf = 0U;
        SwcDCDC_FaultConfirm_1_DW.i_ak++;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart20' */

  /* Chart: '<S4>/Chart21' incorporates:
   *  Inport: '<Root>/HVLV_FaultCode'
   *  Inport: '<Root>/LVHV_FaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_g < 511U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_g++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c22_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c22_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c22_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i_p = 0U;
    SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_f = 0.0;
    SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_h = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c22_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConf_IN_FaultClear:
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_h = 1.0;
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_g >= 2U) {
        SwcDCDC_FaultConfirm_1_DW.is_c22_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i_p = 0U;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_f = 0.0;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_h = 0.0;
      }
      break;

     case SwcDCDC_Faul_IN_Fault_confirm_j:
      switch (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_n) {
       case SwcDCDC_FaultConfirm_1_IN_Loop:
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_h = 0.0;
        if (SwcDCDC_FaultConfirm_1_DW.i_p >= 3) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_n =
            SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
          SwcDCDC_FaultConfirm_1_DW.is_c22_SwcDCDC_FaultConfirm_1 =
            SwcDCDC_Faul_IN_Fault_setting_m;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_f = 1.0;
        } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_g >= 300U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_n =
            SwcDCDC_FaultCo_IN_Loop_confirm;
          SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_g = 0U;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_h = 1.0;
        }
        break;

       case SwcDCDC_FaultCo_IN_Loop_confirm:
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_h = 1.0;
        if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_g >= 2U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_n =
            SwcDCDC_FaultConfirm__IN_Wait_e;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_h = 0.0;
        }
        break;

       default:
        /* case IN_Wait: */
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_h = 0.0;
        if ((((uint32_T)(int32_T)get_HVLV_FaultCode() & 262144U) != 0U) ||
            (((uint32_T)(int32_T)get_LVHV_FaultCode() & 131072U) != 0U)) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_n =
            SwcDCDC_FaultConfirm_1_IN_Loop;
          SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_g = 0U;
          SwcDCDC_FaultConfirm_1_DW.i_p++;
        }
        break;
      }
      break;

     case SwcDCDC_Faul_IN_Fault_setting_m:
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_f = 1.0;
      if (rtb_ResetZone == 1) {
        SwcDCDC_FaultConfirm_1_DW.is_c22_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_FaultClear;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_g = 0U;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_h = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_f = 0.0;
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_h = 0.0;
      if ((((uint32_T)(int32_T)get_HVLV_FaultCode() & 262144U) != 0U) ||
          (((uint32_T)(int32_T)get_LVHV_FaultCode() & 131072U) != 0U)) {
        SwcDCDC_FaultConfirm_1_DW.is_c22_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_Faul_IN_Fault_confirm_j;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_n =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_g = 0U;
        SwcDCDC_FaultConfirm_1_DW.i_p++;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart21' */

  /* Chart: '<S4>/Chart22' incorporates:
   *  Inport: '<Root>/HVLV_FaultCode'
   *  Inport: '<Root>/LVHV_FaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_l < 511U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_l++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c23_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c23_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c23_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i_ee = 0U;
    SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_l = 0.0;
    SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_c = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c23_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConf_IN_FaultClear:
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_c = 1.0;
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_l >= 2U) {
        SwcDCDC_FaultConfirm_1_DW.is_c23_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i_ee = 0U;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_l = 0.0;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_c = 0.0;
      }
      break;

     case SwcDCDC_Faul_IN_Fault_confirm_j:
      switch (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_oz) {
       case SwcDCDC_FaultConfirm_1_IN_Loop:
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_c = 0.0;
        if (SwcDCDC_FaultConfirm_1_DW.i_ee >= 3) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_oz =
            SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
          SwcDCDC_FaultConfirm_1_DW.is_c23_SwcDCDC_FaultConfirm_1 =
            SwcDCDC_Faul_IN_Fault_setting_m;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_l = 1.0;
        } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_l >= 300U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_oz =
            SwcDCDC_FaultCo_IN_Loop_confirm;
          SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_l = 0U;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_c = 1.0;
        }
        break;

       case SwcDCDC_FaultCo_IN_Loop_confirm:
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_c = 1.0;
        if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_l >= 2U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_oz =
            SwcDCDC_FaultConfirm__IN_Wait_e;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_c = 0.0;
        }
        break;

       default:
        /* case IN_Wait: */
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_c = 0.0;
        if ((((uint32_T)(int32_T)get_HVLV_FaultCode() & 524288U) != 0U) ||
            (((uint32_T)(int32_T)get_LVHV_FaultCode() & 262144U) != 0U)) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_oz =
            SwcDCDC_FaultConfirm_1_IN_Loop;
          SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_l = 0U;
          SwcDCDC_FaultConfirm_1_DW.i_ee++;
        }
        break;
      }
      break;

     case SwcDCDC_Faul_IN_Fault_setting_m:
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_l = 1.0;
      if (rtb_ResetZone == 1) {
        SwcDCDC_FaultConfirm_1_DW.is_c23_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_FaultClear;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_l = 0U;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_c = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_l = 0.0;
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_c = 0.0;
      if ((((uint32_T)(int32_T)get_HVLV_FaultCode() & 524288U) != 0U) ||
          (((uint32_T)(int32_T)get_LVHV_FaultCode() & 262144U) != 0U)) {
        SwcDCDC_FaultConfirm_1_DW.is_c23_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_Faul_IN_Fault_confirm_j;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_oz =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_l = 0U;
        SwcDCDC_FaultConfirm_1_DW.i_ee++;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart22' */

  /* Chart: '<S4>/Chart24' incorporates:
   *  Inport: '<Root>/HVLV_FaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f < 511U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c25_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c25_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c25_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i_jj = 0U;
    SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_m = 0.0;
    SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_j = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c25_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConf_IN_FaultClear:
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_j = 1.0;
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f >= 2U) {
        SwcDCDC_FaultConfirm_1_DW.is_c25_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i_jj = 0U;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_m = 0.0;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_j = 0.0;
      }
      break;

     case SwcDCDC_Faul_IN_Fault_confirm_j:
      switch (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_o) {
       case SwcDCDC_FaultConfirm_1_IN_Loop:
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_j = 0.0;
        if (SwcDCDC_FaultConfirm_1_DW.i_jj >= 3) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_o =
            SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
          SwcDCDC_FaultConfirm_1_DW.is_c25_SwcDCDC_FaultConfirm_1 =
            SwcDCDC_Faul_IN_Fault_setting_m;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_m = 1.0;
        } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f >= 300U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_o =
            SwcDCDC_FaultCo_IN_Loop_confirm;
          SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f = 0U;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_j = 1.0;
        }
        break;

       case SwcDCDC_FaultCo_IN_Loop_confirm:
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_j = 1.0;
        if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f >= 2U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_o =
            SwcDCDC_FaultConfirm__IN_Wait_e;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_j = 0.0;
        }
        break;

       default:
        /* case IN_Wait: */
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_j = 0.0;
        if (((uint32_T)(int32_T)get_HVLV_FaultCode() & 1048576U) != 0U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_o =
            SwcDCDC_FaultConfirm_1_IN_Loop;
          SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f = 0U;
          SwcDCDC_FaultConfirm_1_DW.i_jj++;
        }
        break;
      }
      break;

     case SwcDCDC_Faul_IN_Fault_setting_m:
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_m = 1.0;
      if (rtb_ResetZone == 1) {
        SwcDCDC_FaultConfirm_1_DW.is_c25_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_FaultClear;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f = 0U;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_j = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_m = 0.0;
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_j = 0.0;
      if (((uint32_T)(int32_T)get_HVLV_FaultCode() & 1048576U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c25_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_Faul_IN_Fault_confirm_j;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_o =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f = 0U;
        SwcDCDC_FaultConfirm_1_DW.i_jj++;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart24' */

  /* Chart: '<S4>/Chart25' incorporates:
   *  Inport: '<Root>/HVLV_FaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_b < 511U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_b++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c26_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c26_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c26_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i_j = 0U;
    SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3 = 0.0;
    SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c26_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConf_IN_FaultClear:
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset = 1.0;
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_b >= 2U) {
        SwcDCDC_FaultConfirm_1_DW.is_c26_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i_j = 0U;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3 = 0.0;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset = 0.0;
      }
      break;

     case SwcDCDC_Faul_IN_Fault_confirm_j:
      switch (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_lv) {
       case SwcDCDC_FaultConfirm_1_IN_Loop:
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset = 0.0;
        if (SwcDCDC_FaultConfirm_1_DW.i_j >= 3) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_lv =
            SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
          SwcDCDC_FaultConfirm_1_DW.is_c26_SwcDCDC_FaultConfirm_1 =
            SwcDCDC_Faul_IN_Fault_setting_m;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3 = 1.0;
        } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_b >= 300U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_lv =
            SwcDCDC_FaultCo_IN_Loop_confirm;
          SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_b = 0U;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset = 1.0;
        }
        break;

       case SwcDCDC_FaultCo_IN_Loop_confirm:
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset = 1.0;
        if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_b >= 2U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_lv =
            SwcDCDC_FaultConfirm__IN_Wait_e;
          SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset = 0.0;
        }
        break;

       default:
        /* case IN_Wait: */
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset = 0.0;
        if (((uint32_T)(int32_T)get_HVLV_FaultCode() & 2097152U) != 0U) {
          SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_lv =
            SwcDCDC_FaultConfirm_1_IN_Loop;
          SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_b = 0U;
          SwcDCDC_FaultConfirm_1_DW.i_j++;
        }
        break;
      }
      break;

     case SwcDCDC_Faul_IN_Fault_setting_m:
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3 = 1.0;
      if (rtb_ResetZone == 1) {
        SwcDCDC_FaultConfirm_1_DW.is_c26_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_FaultClear;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_b = 0U;
        SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3 = 0.0;
      SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset = 0.0;
      if (((uint32_T)(int32_T)get_HVLV_FaultCode() & 2097152U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c26_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_Faul_IN_Fault_confirm_j;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_lv =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_b = 0U;
        SwcDCDC_FaultConfirm_1_DW.i_j++;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart25' */

  /* Logic: '<S4>/OR' */
  set_DCDC_HW_FaultReset((SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_i != 0.0) ||
    (SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_h != 0.0) ||
    (SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_c != 0.0) ||
    (rtb_DCDC_HW_FaultReset != 0) ||
    (SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset_j != 0.0) ||
    (SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultReset != 0.0));

  /* Logic: '<S4>/OR1' */
  set_DCDC_HW_FaultL3((SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_c != 0.0) ||
                      (SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_f != 0.0) ||
                      (SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_l != 0.0) ||
                      (SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_k != 0.0) ||
                      (SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3_m != 0.0) ||
                      (SwcDCDC_FaultConfirm_1_B.DCDC_HW_FaultL3 != 0.0));

  /* Chart: '<S4>/Chart15' incorporates:
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_ds < 16383U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_ds++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c16_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c16_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c16_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm__IN_init_c;
    SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleOverCur_Flag = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c16_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConfirm_1_IN_Judge:
      SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleOverCur_Flag = 1.0;
      if ((get_IPCF_DCDCFaultCode() & 16U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c16_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_ds = 0U;
      }
      break;

     case SwcDCDC_FaultConfirm_1_IN_Wait:
      if ((get_IPCF_DCDCFaultCode() & 16U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c16_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_c;
        SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleOverCur_Flag = 0.0;
      } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_ds >= 12000U) {
        SwcDCDC_FaultConfirm_1_DW.is_c16_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Judge;
        SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleOverCur_Flag = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleOverCur_Flag = 0.0;
      if ((get_IPCF_DCDCFaultCode() & 16U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c16_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_ds = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart15' */

  /* Chart: '<S4>/Chart3' incorporates:
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_i < 8191U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_i++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c4_SwcDCDC_FaultConfi == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c4_SwcDCDC_FaultConfi = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c4_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i_b = 0U;
    set_DCDC_LS_SW_MultipleOverCur(0.0);
  } else {
    guard1 = false;
    switch (SwcDCDC_FaultConfirm_1_DW.is_c4_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultC_IN_Fault_confirm:
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_i >= 6000U) {
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_l =
          SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
        SwcDCDC_FaultConfirm_1_DW.is_c4_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_Loop_Clear;
        SwcDCDC_FaultConfirm_1_DW.i_b = 0U;
      } else {
        switch (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_l) {
         case SwcDCDC_FaultConfirm_1_IN_Loop:
          if (SwcDCDC_FaultConfirm_1_DW.i_b >= 5) {
            guard1 = true;
          } else if ((get_IPCF_DCDCFaultCode() & 16U) == 0U) {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_l =
              SwcDCDC_FaultCo_IN_Loop_confirm;
          } else if (SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleOverCur_Flag ==
                     1.0) {
            guard1 = true;
          }
          break;

         default:
          /* case IN_Loop_confirm: */
          if ((get_IPCF_DCDCFaultCode() & 16U) != 0U) {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_l =
              SwcDCDC_FaultConfirm_1_IN_Loop;
            SwcDCDC_FaultConfirm_1_DW.i_b++;
          }
          break;
        }
      }
      break;

     case SwcDCDC_FaultC_IN_Fault_setting:
      set_DCDC_LS_SW_MultipleOverCur(1.0);
      if ((get_IPCF_DCDCFaultCode() & 16U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c4_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i_b = 0U;
        set_DCDC_LS_SW_MultipleOverCur(0.0);
      }
      break;

     case SwcDCDC_FaultConf_IN_Loop_Clear:
      if ((get_IPCF_DCDCFaultCode() & 16U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c4_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_i = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_l =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_b++;
      }
      break;

     default:
      /* case IN_init: */
      set_DCDC_LS_SW_MultipleOverCur(0.0);
      if ((get_IPCF_DCDCFaultCode() & 16U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c4_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_i = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_l =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_b++;
      }
      break;
    }

    if (guard1) {
      SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_l =
        SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
      SwcDCDC_FaultConfirm_1_DW.is_c4_SwcDCDC_FaultConfirm_1 =
        SwcDCDC_FaultC_IN_Fault_setting;
      set_DCDC_LS_SW_MultipleOverCur(1.0);
    }
  }

  /* End of Chart: '<S4>/Chart3' */

  /* Chart: '<S4>/Chart16' incorporates:
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_nn < 16383U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_nn++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c17_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c17_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c17_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm__IN_init_c;
    SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_PrechargeMultipleOve = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c17_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConfirm_1_IN_Judge:
      SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_PrechargeMultipleOve = 1.0;
      if ((get_IPCF_DCDCFaultCode() & 2048U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c17_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_nn = 0U;
      }
      break;

     case SwcDCDC_FaultConfirm_1_IN_Wait:
      if ((get_IPCF_DCDCFaultCode() & 2048U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c17_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_c;
        SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_PrechargeMultipleOve = 0.0;
      } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_nn >= 12000U) {
        SwcDCDC_FaultConfirm_1_DW.is_c17_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Judge;
        SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_PrechargeMultipleOve = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_PrechargeMultipleOve = 0.0;
      if ((get_IPCF_DCDCFaultCode() & 2048U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c17_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_nn = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart16' */

  /* Chart: '<S4>/Chart4' incorporates:
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_d < 8191U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_d++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c5_SwcDCDC_FaultConfi == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c5_SwcDCDC_FaultConfi = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c5_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i_i = 0U;
    set_DCDC_LS_SW_PrechargeMultipleOverCur(0.0);
  } else {
    guard1 = false;
    switch (SwcDCDC_FaultConfirm_1_DW.is_c5_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultC_IN_Fault_confirm:
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_d >= 6000U) {
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_e =
          SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
        SwcDCDC_FaultConfirm_1_DW.is_c5_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_Loop_Clear;
        SwcDCDC_FaultConfirm_1_DW.i_i = 0U;
      } else {
        switch (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_e) {
         case SwcDCDC_FaultConfirm_1_IN_Loop:
          if (SwcDCDC_FaultConfirm_1_DW.i_i >= 5) {
            guard1 = true;
          } else if ((get_IPCF_DCDCFaultCode() & 2048U) == 0U) {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_e =
              SwcDCDC_FaultCo_IN_Loop_confirm;
          } else if (SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_PrechargeMultipleOve ==
                     1.0) {
            guard1 = true;
          }
          break;

         default:
          /* case IN_Loop_confirm: */
          if ((get_IPCF_DCDCFaultCode() & 2048U) != 0U) {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_e =
              SwcDCDC_FaultConfirm_1_IN_Loop;
            SwcDCDC_FaultConfirm_1_DW.i_i++;
          }
          break;
        }
      }
      break;

     case SwcDCDC_FaultC_IN_Fault_setting:
      set_DCDC_LS_SW_PrechargeMultipleOverCur(1.0);
      if ((get_IPCF_DCDCFaultCode() & 2048U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c5_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i_i = 0U;
        set_DCDC_LS_SW_PrechargeMultipleOverCur(0.0);
      }
      break;

     case SwcDCDC_FaultConf_IN_Loop_Clear:
      if ((get_IPCF_DCDCFaultCode() & 2048U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c5_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_d = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_e =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_i++;
      }
      break;

     default:
      /* case IN_init: */
      set_DCDC_LS_SW_PrechargeMultipleOverCur(0.0);
      if ((get_IPCF_DCDCFaultCode() & 2048U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c5_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_d = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_e =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_i++;
      }
      break;
    }

    if (guard1) {
      SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_e =
        SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
      SwcDCDC_FaultConfirm_1_DW.is_c5_SwcDCDC_FaultConfirm_1 =
        SwcDCDC_FaultC_IN_Fault_setting;
      set_DCDC_LS_SW_PrechargeMultipleOverCur(1.0);
    }
  }

  /* End of Chart: '<S4>/Chart4' */

  /* Chart: '<S4>/Chart17' incorporates:
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_a < 16383U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_a++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c18_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c18_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c18_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm__IN_init_c;
    SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleOverVol_Flag = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c18_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConfirm_1_IN_Judge:
      SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleOverVol_Flag = 1.0;
      if ((get_IPCF_DCDCFaultCode() & 4U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c18_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_a = 0U;
      }
      break;

     case SwcDCDC_FaultConfirm_1_IN_Wait:
      if ((get_IPCF_DCDCFaultCode() & 4U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c18_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_c;
        SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleOverVol_Flag = 0.0;
      } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_a >= 12000U) {
        SwcDCDC_FaultConfirm_1_DW.is_c18_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Judge;
        SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleOverVol_Flag = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleOverVol_Flag = 0.0;
      if ((get_IPCF_DCDCFaultCode() & 4U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c18_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_a = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart17' */

  /* Chart: '<S4>/Chart6' incorporates:
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_p < 8191U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_p++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c7_SwcDCDC_FaultConfi == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c7_SwcDCDC_FaultConfi = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c7_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i_a = 0U;
    set_DCDC_HS_SW_MultipleOverVol(0.0);
  } else {
    guard1 = false;
    switch (SwcDCDC_FaultConfirm_1_DW.is_c7_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultC_IN_Fault_confirm:
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_p >= 6000U) {
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_d =
          SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
        SwcDCDC_FaultConfirm_1_DW.is_c7_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_Loop_Clear;
        SwcDCDC_FaultConfirm_1_DW.i_a = 0U;
      } else {
        switch (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_d) {
         case SwcDCDC_FaultConfirm_1_IN_Loop:
          if (SwcDCDC_FaultConfirm_1_DW.i_a >= 5) {
            guard1 = true;
          } else if ((get_IPCF_DCDCFaultCode() & 4U) == 0U) {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_d =
              SwcDCDC_FaultCo_IN_Loop_confirm;
          } else if (SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleOverVol_Flag ==
                     1.0) {
            guard1 = true;
          }
          break;

         default:
          /* case IN_Loop_confirm: */
          if ((get_IPCF_DCDCFaultCode() & 4U) != 0U) {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_d =
              SwcDCDC_FaultConfirm_1_IN_Loop;
            SwcDCDC_FaultConfirm_1_DW.i_a++;
          }
          break;
        }
      }
      break;

     case SwcDCDC_FaultC_IN_Fault_setting:
      set_DCDC_HS_SW_MultipleOverVol(1.0);
      if ((get_IPCF_DCDCFaultCode() & 4U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c7_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i_a = 0U;
        set_DCDC_HS_SW_MultipleOverVol(0.0);
      }
      break;

     case SwcDCDC_FaultConf_IN_Loop_Clear:
      if ((get_IPCF_DCDCFaultCode() & 4U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c7_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_p = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_d =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_a++;
      }
      break;

     default:
      /* case IN_init: */
      set_DCDC_HS_SW_MultipleOverVol(0.0);
      if ((get_IPCF_DCDCFaultCode() & 4U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c7_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_p = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_d =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_a++;
      }
      break;
    }

    if (guard1) {
      SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_d =
        SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
      SwcDCDC_FaultConfirm_1_DW.is_c7_SwcDCDC_FaultConfirm_1 =
        SwcDCDC_FaultC_IN_Fault_setting;
      set_DCDC_HS_SW_MultipleOverVol(1.0);
    }
  }

  /* End of Chart: '<S4>/Chart6' */

  /* Chart: '<S4>/Chart1' incorporates:
   *  Inport: '<Root>/CAN_HCU_DCDCEnable'
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_e < 255U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_e++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c1_SwcDCDC_FaultConfi == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c1_SwcDCDC_FaultConfi = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c1_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm__IN_init_e;
    set_DCDC_HS_SW_UnderVol(0.0);
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c1_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultC_IN_Fault_Confirm:
      set_DCDC_HS_SW_UnderVol(1.0);
      if ((get_IPCF_DCDCFaultCode() & 8U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c1_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_e;
        set_DCDC_HS_SW_UnderVol(0.0);
      } else if (get_CAN_HCU_DCDCEnable() != 2) {
        SwcDCDC_FaultConfirm_1_DW.is_c1_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait2;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_e = 0U;
      }
      break;

     case SwcDCDC_FaultConfirm_1_IN_Wait:
      if (get_CAN_HCU_DCDCEnable() != 2) {
        SwcDCDC_FaultConfirm_1_DW.is_c1_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_e;
        set_DCDC_HS_SW_UnderVol(0.0);
      } else if (((get_IPCF_DCDCFaultCode() & 8U) != 0U) &&
                 (get_CAN_HCU_DCDCEnable() == 2)) {
        SwcDCDC_FaultConfirm_1_DW.is_c1_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_Confirm;
        set_DCDC_HS_SW_UnderVol(1.0);
      }
      break;

     case SwcDCDC_FaultConfirm_1_IN_Wait1:
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_e >= 200U) {
        SwcDCDC_FaultConfirm_1_DW.is_c1_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
      } else if (get_CAN_HCU_DCDCEnable() != 2) {
        SwcDCDC_FaultConfirm_1_DW.is_c1_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_e;
        set_DCDC_HS_SW_UnderVol(0.0);
      }
      break;

     case SwcDCDC_FaultConfirm_1_IN_Wait2:
      if (((get_IPCF_DCDCFaultCode() & 8U) == 0U) ||
          (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_e >= 100U)) {
        SwcDCDC_FaultConfirm_1_DW.is_c1_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_e;
        set_DCDC_HS_SW_UnderVol(0.0);
      }
      break;

     default:
      /* case IN_init: */
      set_DCDC_HS_SW_UnderVol(0.0);
      if (get_CAN_HCU_DCDCEnable() == 2) {
        SwcDCDC_FaultConfirm_1_DW.is_c1_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait1;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_e = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart1' */

  /* Chart: '<S4>/Chart13' */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_io < 16383U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_io++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c14_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c14_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c14_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm__IN_init_c;
    SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleUnderVol_Fla = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c14_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConfirm_1_IN_Judge:
      SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleUnderVol_Fla = 1.0;
      if (((uint32_T)(int32_T)get_DCDC_HS_SW_UnderVol() & 1U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c14_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_io = 0U;
      }
      break;

     case SwcDCDC_FaultConfirm_1_IN_Wait:
      if (((uint32_T)(int32_T)get_DCDC_HS_SW_UnderVol() & 1U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c14_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_c;
        SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleUnderVol_Fla = 0.0;
      } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_io >= 12000U) {
        SwcDCDC_FaultConfirm_1_DW.is_c14_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Judge;
        SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleUnderVol_Fla = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleUnderVol_Fla = 0.0;
      if (((uint32_T)(int32_T)get_DCDC_HS_SW_UnderVol() & 1U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c14_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_io = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart13' */

  /* Chart: '<S4>/Chart7' */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_c < 8191U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_c++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c8_SwcDCDC_FaultConfi == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c8_SwcDCDC_FaultConfi = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c8_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i_e = 0U;
    set_DCDC_HS_SW_MultipleUnderVol(0.0);
  } else {
    guard1 = false;
    switch (SwcDCDC_FaultConfirm_1_DW.is_c8_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultC_IN_Fault_confirm:
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_c >= 6000U) {
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_m =
          SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
        SwcDCDC_FaultConfirm_1_DW.is_c8_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_Loop_Clear;
        SwcDCDC_FaultConfirm_1_DW.i_e = 0U;
      } else {
        switch (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_m) {
         case SwcDCDC_FaultConfirm_1_IN_Loop:
          if (SwcDCDC_FaultConfirm_1_DW.i_e >= 5) {
            guard1 = true;
          } else if (((uint32_T)(int32_T)get_DCDC_HS_SW_UnderVol() & 1U) == 0U)
          {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_m =
              SwcDCDC_FaultCo_IN_Loop_confirm;
          } else if (SwcDCDC_FaultConfirm_1_B.DCDC_HS_SW_MultipleUnderVol_Fla ==
                     1.0) {
            guard1 = true;
          }
          break;

         default:
          /* case IN_Loop_confirm: */
          if (((uint32_T)(int32_T)get_DCDC_HS_SW_UnderVol() & 1U) != 0U) {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_m =
              SwcDCDC_FaultConfirm_1_IN_Loop;
            SwcDCDC_FaultConfirm_1_DW.i_e++;
          }
          break;
        }
      }
      break;

     case SwcDCDC_FaultC_IN_Fault_setting:
      set_DCDC_HS_SW_MultipleUnderVol(1.0);
      if (((uint32_T)(int32_T)get_DCDC_HS_SW_UnderVol() & 1U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c8_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i_e = 0U;
        set_DCDC_HS_SW_MultipleUnderVol(0.0);
      }
      break;

     case SwcDCDC_FaultConf_IN_Loop_Clear:
      if (((uint32_T)(int32_T)get_DCDC_HS_SW_UnderVol() & 1U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c8_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_c = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_m =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_e++;
      }
      break;

     default:
      /* case IN_init: */
      set_DCDC_HS_SW_MultipleUnderVol(0.0);
      if (((uint32_T)(int32_T)get_DCDC_HS_SW_UnderVol() & 1U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c8_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_c = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_m =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_e++;
      }
      break;
    }

    if (guard1) {
      SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_m =
        SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
      SwcDCDC_FaultConfirm_1_DW.is_c8_SwcDCDC_FaultConfirm_1 =
        SwcDCDC_FaultC_IN_Fault_setting;
      set_DCDC_HS_SW_MultipleUnderVol(1.0);
    }
  }

  /* End of Chart: '<S4>/Chart7' */

  /* Chart: '<S4>/Chart5' incorporates:
   *  Inport: '<Root>/CAN_HCU_DCDCEnable'
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.is_active_c6_SwcDCDC_FaultConfi == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c6_SwcDCDC_FaultConfi = 1U;
  } else {
    uint32_T tmp;
    tmp = get_IPCF_DCDCFaultCode() & 2U;
    if ((tmp != 0U) && ((get_CAN_HCU_DCDCEnable() == 1) ||
                        (get_CAN_HCU_DCDCEnable() == 2))) {
      set_DCDC_LS_SW_UnderVol(1.0);
    } else if (tmp == 0U) {
      set_DCDC_LS_SW_UnderVol(0.0);
    }
  }

  /* End of Chart: '<S4>/Chart5' */

  /* Chart: '<S4>/Chart18' */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f2 < 16383U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f2++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c19_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c19_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c19_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm__IN_init_c;
    SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleUnderVol_Fla = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c19_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConfirm_1_IN_Judge:
      SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleUnderVol_Fla = 1.0;
      if (((uint32_T)(int32_T)get_DCDC_LS_SW_UnderVol() & 1U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c19_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f2 = 0U;
      }
      break;

     case SwcDCDC_FaultConfirm_1_IN_Wait:
      if (((uint32_T)(int32_T)get_DCDC_LS_SW_UnderVol() & 1U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c19_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_c;
        SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleUnderVol_Fla = 0.0;
      } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f2 >= 12000U) {
        SwcDCDC_FaultConfirm_1_DW.is_c19_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Judge;
        SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleUnderVol_Fla = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleUnderVol_Fla = 0.0;
      if (((uint32_T)(int32_T)get_DCDC_LS_SW_UnderVol() & 1U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c19_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_f2 = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart18' */

  /* Chart: '<S4>/Chart8' */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_n < 8191U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_n++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c9_SwcDCDC_FaultConfi == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c9_SwcDCDC_FaultConfi = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c9_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i_f = 0U;
    set_DCDC_LS_SW_MultipleUnderVol(0.0);
  } else {
    guard1 = false;
    switch (SwcDCDC_FaultConfirm_1_DW.is_c9_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultC_IN_Fault_confirm:
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_n >= 6000U) {
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c =
          SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
        SwcDCDC_FaultConfirm_1_DW.is_c9_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_Loop_Clear;
        SwcDCDC_FaultConfirm_1_DW.i_f = 0U;
      } else {
        switch (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c) {
         case SwcDCDC_FaultConfirm_1_IN_Loop:
          if (SwcDCDC_FaultConfirm_1_DW.i_f >= 5) {
            guard1 = true;
          } else if (((uint32_T)(int32_T)get_DCDC_LS_SW_UnderVol() & 1U) == 0U)
          {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c =
              SwcDCDC_FaultCo_IN_Loop_confirm;
          } else if (SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_MultipleUnderVol_Fla ==
                     1.0) {
            guard1 = true;
          }
          break;

         default:
          /* case IN_Loop_confirm: */
          if (((uint32_T)(int32_T)get_DCDC_LS_SW_UnderVol() & 1U) != 0U) {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c =
              SwcDCDC_FaultConfirm_1_IN_Loop;
            SwcDCDC_FaultConfirm_1_DW.i_f++;
          }
          break;
        }
      }
      break;

     case SwcDCDC_FaultC_IN_Fault_setting:
      set_DCDC_LS_SW_MultipleUnderVol(1.0);
      if (((uint32_T)(int32_T)get_DCDC_LS_SW_UnderVol() & 1U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c9_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i_f = 0U;
        set_DCDC_LS_SW_MultipleUnderVol(0.0);
      }
      break;

     case SwcDCDC_FaultConf_IN_Loop_Clear:
      if (((uint32_T)(int32_T)get_DCDC_LS_SW_UnderVol() & 1U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c9_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_n = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_f++;
      }
      break;

     default:
      /* case IN_init: */
      set_DCDC_LS_SW_MultipleUnderVol(0.0);
      if (((uint32_T)(int32_T)get_DCDC_LS_SW_UnderVol() & 1U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c9_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_n = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i_f++;
      }
      break;
    }

    if (guard1) {
      SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm_c =
        SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
      SwcDCDC_FaultConfirm_1_DW.is_c9_SwcDCDC_FaultConfirm_1 =
        SwcDCDC_FaultC_IN_Fault_setting;
      set_DCDC_LS_SW_MultipleUnderVol(1.0);
    }
  }

  /* End of Chart: '<S4>/Chart8' */

  /* Chart: '<S4>/Chart19' incorporates:
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_bn < 16383U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_bn++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c20_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c20_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c20_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm__IN_init_c;
    SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_PrechargeMultipleUnd = 0.0;
  } else {
    switch (SwcDCDC_FaultConfirm_1_DW.is_c20_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultConfirm_1_IN_Judge:
      SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_PrechargeMultipleUnd = 1.0;
      if ((get_IPCF_DCDCFaultCode() & 1024U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c20_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_bn = 0U;
      }
      break;

     case SwcDCDC_FaultConfirm_1_IN_Wait:
      if ((get_IPCF_DCDCFaultCode() & 1024U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c20_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm__IN_init_c;
        SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_PrechargeMultipleUnd = 0.0;
      } else if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_bn >= 12000U) {
        SwcDCDC_FaultConfirm_1_DW.is_c20_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Judge;
        SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_PrechargeMultipleUnd = 1.0;
      }
      break;

     default:
      /* case IN_init: */
      SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_PrechargeMultipleUnd = 0.0;
      if ((get_IPCF_DCDCFaultCode() & 1024U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c20_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_Wait;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1_bn = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart19' */

  /* Chart: '<S4>/Chart9' incorporates:
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1 < 8191U) {
    SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1++;
  }

  if (SwcDCDC_FaultConfirm_1_DW.is_active_c10_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c10_SwcDCDC_FaultConf = 1U;
    SwcDCDC_FaultConfirm_1_DW.is_c10_SwcDCDC_FaultConfirm_1 =
      SwcDCDC_FaultConfirm_1_IN_init;
    SwcDCDC_FaultConfirm_1_DW.i = 0U;
    set_DCDC_LS_SW_PrechargeMultipleUnderVol(0.0);
  } else {
    guard1 = false;
    switch (SwcDCDC_FaultConfirm_1_DW.is_c10_SwcDCDC_FaultConfirm_1) {
     case SwcDCDC_FaultC_IN_Fault_confirm:
      if (SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1 >= 6000U) {
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm =
          SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
        SwcDCDC_FaultConfirm_1_DW.is_c10_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConf_IN_Loop_Clear;
        SwcDCDC_FaultConfirm_1_DW.i = 0U;
      } else {
        switch (SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm) {
         case SwcDCDC_FaultConfirm_1_IN_Loop:
          if (SwcDCDC_FaultConfirm_1_DW.i >= 5) {
            guard1 = true;
          } else if ((get_IPCF_DCDCFaultCode() & 1024U) == 0U) {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm =
              SwcDCDC_FaultCo_IN_Loop_confirm;
          } else if (SwcDCDC_FaultConfirm_1_B.DCDC_LS_SW_PrechargeMultipleUnd ==
                     1.0) {
            guard1 = true;
          }
          break;

         default:
          /* case IN_Loop_confirm: */
          if ((get_IPCF_DCDCFaultCode() & 1024U) != 0U) {
            SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm =
              SwcDCDC_FaultConfirm_1_IN_Loop;
            SwcDCDC_FaultConfirm_1_DW.i++;
          }
          break;
        }
      }
      break;

     case SwcDCDC_FaultC_IN_Fault_setting:
      set_DCDC_LS_SW_PrechargeMultipleUnderVol(1.0);
      if ((get_IPCF_DCDCFaultCode() & 1024U) == 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c10_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultConfirm_1_IN_init;
        SwcDCDC_FaultConfirm_1_DW.i = 0U;
        set_DCDC_LS_SW_PrechargeMultipleUnderVol(0.0);
      }
      break;

     case SwcDCDC_FaultConf_IN_Loop_Clear:
      if ((get_IPCF_DCDCFaultCode() & 1024U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c10_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1 = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i++;
      }
      break;

     default:
      /* case IN_init: */
      set_DCDC_LS_SW_PrechargeMultipleUnderVol(0.0);
      if ((get_IPCF_DCDCFaultCode() & 1024U) != 0U) {
        SwcDCDC_FaultConfirm_1_DW.is_c10_SwcDCDC_FaultConfirm_1 =
          SwcDCDC_FaultC_IN_Fault_confirm;
        SwcDCDC_FaultConfirm_1_DW.temporalCounter_i1 = 0U;
        SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm =
          SwcDCDC_FaultConfirm_1_IN_Loop;
        SwcDCDC_FaultConfirm_1_DW.i++;
      }
      break;
    }

    if (guard1) {
      SwcDCDC_FaultConfirm_1_DW.is_Fault_confirm =
        SwcDCDC_Faul_IN_NO_ACTIVE_CHILD;
      SwcDCDC_FaultConfirm_1_DW.is_c10_SwcDCDC_FaultConfirm_1 =
        SwcDCDC_FaultC_IN_Fault_setting;
      set_DCDC_LS_SW_PrechargeMultipleUnderVol(1.0);
    }
  }

  /* End of Chart: '<S4>/Chart9' */

  /* Chart: '<S4>/Chart10' incorporates:
   *  Inport: '<Root>/CAN_HCU_DCDCEnable'
   *  Inport: '<Root>/IPCF_DCDCFaultCode'
   */
  if (SwcDCDC_FaultConfirm_1_DW.is_active_c11_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c11_SwcDCDC_FaultConf = 1U;
  } else if (get_CAN_HCU_DCDCEnable() != 1) {
    set_DCDC_PrechargeFailed(0.0);
  } else if ((get_IPCF_DCDCFaultCode() & 64U) != 0U) {
    set_DCDC_PrechargeFailed(1.0);
  }

  /* End of Chart: '<S4>/Chart10' */

  /* Chart: '<S4>/Chart11' incorporates:
   *  Inport: '<Root>/CAN_HCU_DCDCEnable'
   *  Inport: '<Root>/IO_DCDC_LS_HW_PrechargeOCP'
   */
  if (SwcDCDC_FaultConfirm_1_DW.is_active_c12_SwcDCDC_FaultConf == 0U) {
    SwcDCDC_FaultConfirm_1_DW.is_active_c12_SwcDCDC_FaultConf = 1U;
  } else if ((get_CAN_HCU_DCDCEnable() == 1) && (get_IO_DCDC_LS_HW_PrechargeOCP()
              == 1)) {
    set_DCDC_LS_HW_PrechargeOCP_LVHV(1.0);
    set_DCDC_LS_HW_PrechargeOCP_HVLV(0.0);
  } else if ((get_CAN_HCU_DCDCEnable() == 2) && (get_IO_DCDC_LS_HW_PrechargeOCP()
              == 1)) {
    set_DCDC_LS_HW_PrechargeOCP_LVHV(0.0);
    set_DCDC_LS_HW_PrechargeOCP_HVLV(1.0);
  } else if (get_IO_DCDC_LS_HW_PrechargeOCP() == 0) {
    set_DCDC_LS_HW_PrechargeOCP_LVHV(0.0);
    set_DCDC_LS_HW_PrechargeOCP_HVLV(0.0);
  }

  /* End of Chart: '<S4>/Chart11' */
}

/* Model initialize function */
void SwcDCDC_FaultConfirm_1_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void SwcDCDC_FaultConfirm_1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
