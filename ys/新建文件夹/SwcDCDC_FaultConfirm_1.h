/*
 * File: SwcDCDC_FaultConfirm_1.h
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

#ifndef RTW_HEADER_SwcDCDC_FaultConfirm_1_h_
#define RTW_HEADER_SwcDCDC_FaultConfirm_1_h_
#ifndef SwcDCDC_FaultConfirm_1_COMMON_INCLUDES_
#define SwcDCDC_FaultConfirm_1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                             /* SwcDCDC_FaultConfirm_1_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_SwcDCDC_FaultConfirm__T RT_MODEL_SwcDCDC_FaultConfirm_T;

/* user code (top of header file) */
#include"interface.h"

/* Block signals (default storage) */
typedef struct {
  real_T DCDC_HW_FaultReset;           /* '<S4>/Chart25' */
  real_T DCDC_HW_FaultL3;              /* '<S4>/Chart25' */
  real_T DCDC_HW_FaultReset_j;         /* '<S4>/Chart24' */
  real_T DCDC_HW_FaultL3_m;            /* '<S4>/Chart24' */
  real_T DCDC_HW_FaultL3_k;            /* '<S4>/Chart23' */
  real_T DCDC_HW_FaultReset_c;         /* '<S4>/Chart22' */
  real_T DCDC_HW_FaultL3_l;            /* '<S4>/Chart22' */
  real_T DCDC_HW_FaultReset_h;         /* '<S4>/Chart21' */
  real_T DCDC_HW_FaultL3_f;            /* '<S4>/Chart21' */
  real_T DCDC_HW_FaultReset_i;         /* '<S4>/Chart20' */
  real_T DCDC_HW_FaultL3_c;            /* '<S4>/Chart20' */
  real_T DCDC_LS_SW_PrechargeMultipleUnd;/* '<S4>/Chart19' */
  real_T DCDC_LS_SW_MultipleUnderVol_Fla;/* '<S4>/Chart18' */
  real_T DCDC_HS_SW_MultipleOverVol_Flag;/* '<S4>/Chart17' */
  real_T DCDC_LS_SW_PrechargeMultipleOve;/* '<S4>/Chart16' */
  real_T DCDC_LS_SW_MultipleOverCur_Flag;/* '<S4>/Chart15' */
  real_T DCDC_LS_SW_MultipleOverVol_Flag;/* '<S4>/Chart14' */
  real_T DCDC_HS_SW_MultipleUnderVol_Fla;/* '<S4>/Chart13' */
  real_T DCDC_HS_SW_MultipleOverCur_Flag;/* '<S4>/Chart12' */
} B_SwcDCDC_FaultConfirm_1_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real32_T UnitDelay_DSTATE;           /* '<S11>/UnitDelay' */
  real32_T UnitDelay_DSTATE_l;         /* '<S12>/UnitDelay' */
  uint16_T temporalCounter_i1;         /* '<S4>/Chart9' */
  uint16_T temporalCounter_i1_n;       /* '<S4>/Chart8' */
  uint16_T temporalCounter_i1_c;       /* '<S4>/Chart7' */
  uint16_T temporalCounter_i1_p;       /* '<S4>/Chart6' */
  uint16_T temporalCounter_i1_d;       /* '<S4>/Chart4' */
  uint16_T temporalCounter_i1_i;       /* '<S4>/Chart3' */
  uint16_T temporalCounter_i1_b;       /* '<S4>/Chart25' */
  uint16_T temporalCounter_i1_f;       /* '<S4>/Chart24' */
  uint16_T temporalCounter_i1_l;       /* '<S4>/Chart22' */
  uint16_T temporalCounter_i1_g;       /* '<S4>/Chart21' */
  uint16_T temporalCounter_i1_lf;      /* '<S4>/Chart20' */
  uint16_T temporalCounter_i1_h;       /* '<S4>/Chart2' */
  uint16_T temporalCounter_i1_bn;      /* '<S4>/Chart19' */
  uint16_T temporalCounter_i1_f2;      /* '<S4>/Chart18' */
  uint16_T temporalCounter_i1_a;       /* '<S4>/Chart17' */
  uint16_T temporalCounter_i1_nn;      /* '<S4>/Chart16' */
  uint16_T temporalCounter_i1_ds;      /* '<S4>/Chart15' */
  uint16_T temporalCounter_i1_ci;      /* '<S4>/Chart14' */
  uint16_T temporalCounter_i1_io;      /* '<S4>/Chart13' */
  uint16_T temporalCounter_i1_p5;      /* '<S4>/Chart12' */
  uint16_T temporalCounter_i1_pq;      /* '<S4>/Chart' */
  uint8_T is_c10_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart9' */
  uint8_T is_Fault_confirm;            /* '<S4>/Chart9' */
  uint8_T i;                           /* '<S4>/Chart9' */
  uint8_T is_active_c10_SwcDCDC_FaultConf;/* '<S4>/Chart9' */
  uint8_T is_c9_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart8' */
  uint8_T is_Fault_confirm_c;          /* '<S4>/Chart8' */
  uint8_T i_f;                         /* '<S4>/Chart8' */
  uint8_T is_active_c9_SwcDCDC_FaultConfi;/* '<S4>/Chart8' */
  uint8_T is_c8_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart7' */
  uint8_T is_Fault_confirm_m;          /* '<S4>/Chart7' */
  uint8_T i_e;                         /* '<S4>/Chart7' */
  uint8_T is_active_c8_SwcDCDC_FaultConfi;/* '<S4>/Chart7' */
  uint8_T is_c7_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart6' */
  uint8_T is_Fault_confirm_d;          /* '<S4>/Chart6' */
  uint8_T i_a;                         /* '<S4>/Chart6' */
  uint8_T is_active_c7_SwcDCDC_FaultConfi;/* '<S4>/Chart6' */
  uint8_T is_active_c6_SwcDCDC_FaultConfi;/* '<S4>/Chart5' */
  uint8_T is_c5_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart4' */
  uint8_T is_Fault_confirm_e;          /* '<S4>/Chart4' */
  uint8_T i_i;                         /* '<S4>/Chart4' */
  uint8_T is_active_c5_SwcDCDC_FaultConfi;/* '<S4>/Chart4' */
  uint8_T is_c4_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart3' */
  uint8_T is_Fault_confirm_l;          /* '<S4>/Chart3' */
  uint8_T i_b;                         /* '<S4>/Chart3' */
  uint8_T is_active_c4_SwcDCDC_FaultConfi;/* '<S4>/Chart3' */
  uint8_T is_c27_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart26' */
  uint8_T is_active_c27_SwcDCDC_FaultConf;/* '<S4>/Chart26' */
  uint8_T is_c26_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart25' */
  uint8_T is_Fault_confirm_lv;         /* '<S4>/Chart25' */
  uint8_T i_j;                         /* '<S4>/Chart25' */
  uint8_T is_active_c26_SwcDCDC_FaultConf;/* '<S4>/Chart25' */
  uint8_T is_c25_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart24' */
  uint8_T is_Fault_confirm_o;          /* '<S4>/Chart24' */
  uint8_T i_jj;                        /* '<S4>/Chart24' */
  uint8_T is_active_c25_SwcDCDC_FaultConf;/* '<S4>/Chart24' */
  uint8_T is_c24_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart23' */
  uint8_T is_active_c24_SwcDCDC_FaultConf;/* '<S4>/Chart23' */
  uint8_T temporalCounter_i1_da;       /* '<S4>/Chart23' */
  uint8_T is_c23_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart22' */
  uint8_T is_Fault_confirm_oz;         /* '<S4>/Chart22' */
  uint8_T i_ee;                        /* '<S4>/Chart22' */
  uint8_T is_active_c23_SwcDCDC_FaultConf;/* '<S4>/Chart22' */
  uint8_T is_c22_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart21' */
  uint8_T is_Fault_confirm_n;          /* '<S4>/Chart21' */
  uint8_T i_p;                         /* '<S4>/Chart21' */
  uint8_T is_active_c22_SwcDCDC_FaultConf;/* '<S4>/Chart21' */
  uint8_T is_c21_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart20' */
  uint8_T is_Fault_confirm_ll;         /* '<S4>/Chart20' */
  uint8_T i_ak;                        /* '<S4>/Chart20' */
  uint8_T is_active_c21_SwcDCDC_FaultConf;/* '<S4>/Chart20' */
  uint8_T is_c2_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart2' */
  uint8_T is_Fault_confirm_c3;         /* '<S4>/Chart2' */
  uint8_T i_n;                         /* '<S4>/Chart2' */
  uint8_T is_active_c2_SwcDCDC_FaultConfi;/* '<S4>/Chart2' */
  uint8_T is_c20_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart19' */
  uint8_T is_active_c20_SwcDCDC_FaultConf;/* '<S4>/Chart19' */
  uint8_T is_c19_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart18' */
  uint8_T is_active_c19_SwcDCDC_FaultConf;/* '<S4>/Chart18' */
  uint8_T is_c18_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart17' */
  uint8_T is_active_c18_SwcDCDC_FaultConf;/* '<S4>/Chart17' */
  uint8_T is_c17_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart16' */
  uint8_T is_active_c17_SwcDCDC_FaultConf;/* '<S4>/Chart16' */
  uint8_T is_c16_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart15' */
  uint8_T is_active_c16_SwcDCDC_FaultConf;/* '<S4>/Chart15' */
  uint8_T is_c15_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart14' */
  uint8_T is_active_c15_SwcDCDC_FaultConf;/* '<S4>/Chart14' */
  uint8_T is_c14_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart13' */
  uint8_T is_active_c14_SwcDCDC_FaultConf;/* '<S4>/Chart13' */
  uint8_T is_c13_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart12' */
  uint8_T is_active_c13_SwcDCDC_FaultConf;/* '<S4>/Chart12' */
  uint8_T is_active_c12_SwcDCDC_FaultConf;/* '<S4>/Chart11' */
  uint8_T is_active_c11_SwcDCDC_FaultConf;/* '<S4>/Chart10' */
  uint8_T is_c1_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart1' */
  uint8_T is_active_c1_SwcDCDC_FaultConfi;/* '<S4>/Chart1' */
  uint8_T temporalCounter_i1_e;        /* '<S4>/Chart1' */
  uint8_T is_c3_SwcDCDC_FaultConfirm_1;/* '<S4>/Chart' */
  uint8_T is_Fault_confirm_h;          /* '<S4>/Chart' */
  uint8_T i_jt;                        /* '<S4>/Chart' */
  uint8_T is_active_c3_SwcDCDC_FaultConfi;/* '<S4>/Chart' */
} DW_SwcDCDC_FaultConfirm_1_T;

/* Real-time Model Data Structure */
struct tag_RTM_SwcDCDC_FaultConfirm__T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_SwcDCDC_FaultConfirm_1_T SwcDCDC_FaultConfirm_1_B;

/* Block states (default storage) */
extern DW_SwcDCDC_FaultConfirm_1_T SwcDCDC_FaultConfirm_1_DW;

/* Model entry point functions */
void SwcDCDC_FaultConfirm_1_initialize(void);
void SwcDCDC_FaultConfirm_1_step(void);
void SwcDCDC_FaultConfirm_1_terminate(void);

/* Exported data declaration */

/* Declaration for custom storage class: Default */
extern uint16_T U16_DCDC_FaultConfirmDelayTime;/* Referenced by:
                                                * '<S3>/Constant4'
                                                * '<S3>/Constant6'
                                                */
extern uint8_T U8_DCDC_CMD_Work_BuckEnable;/* Referenced by: '<S9>/Constant' */
extern uint8_T U8_Dsp_TxPcbOutVolt1PrecisionFactor;/* Referenced by: '<S3>/Constant' */
extern uint8_T U8_IPCF_AgingMode;      /* Referenced by: '<S7>/Constant' */
extern uint8_T U8_Kl30_DSPLimit;       /* Referenced by: '<S5>/Constant' */
extern uint8_T U8_Kl30_DSPLimit2;      /* Referenced by: '<S6>/Constant' */

/* Real-time Model object */
extern RT_MODEL_SwcDCDC_FaultConfirm_T *const SwcDCDC_FaultConfirm_1_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S11>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S11>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S12>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S12>/Data Type Conversion2' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SwcDCDC_FaultConfirm_1'
 * '<S1>'   : 'SwcDCDC_FaultConfirm_1/Confirm'
 * '<S2>'   : 'SwcDCDC_FaultConfirm_1/info'
 * '<S3>'   : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem'
 * '<S4>'   : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1'
 * '<S5>'   : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem/Compare To Constant'
 * '<S6>'   : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem/Compare To Constant2'
 * '<S7>'   : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem/Compare To Constant3'
 * '<S8>'   : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem/Compare To Constant4'
 * '<S9>'   : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem/Compare To Constant5'
 * '<S10>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem/Compare To Constant6'
 * '<S11>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem/Delayde_Enable1'
 * '<S12>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem/Delayde_Enable2'
 * '<S13>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem/S_R_contravene'
 * '<S14>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart'
 * '<S15>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart1'
 * '<S16>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart10'
 * '<S17>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart11'
 * '<S18>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart12'
 * '<S19>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart13'
 * '<S20>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart14'
 * '<S21>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart15'
 * '<S22>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart16'
 * '<S23>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart17'
 * '<S24>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart18'
 * '<S25>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart19'
 * '<S26>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart2'
 * '<S27>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart20'
 * '<S28>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart21'
 * '<S29>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart22'
 * '<S30>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart23'
 * '<S31>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart24'
 * '<S32>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart25'
 * '<S33>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart26'
 * '<S34>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart3'
 * '<S35>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart4'
 * '<S36>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart5'
 * '<S37>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart6'
 * '<S38>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart7'
 * '<S39>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart8'
 * '<S40>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Chart9'
 * '<S41>'  : 'SwcDCDC_FaultConfirm_1/Confirm/Subsystem1/Compare To Constant2'
 */
#endif                                /* RTW_HEADER_SwcDCDC_FaultConfirm_1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
