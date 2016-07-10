/*
 * File: arduinomega2560_gettingstarted.h
 *
 * Code generated for Simulink model 'arduinomega2560_gettingstarted'.
 *
 * Model version                  : 1.84
 * Simulink Coder version         : 8.8 (R2015a) 09-Feb-2015
 * TLC version                    : 8.8 (Jan 20 2015)
 * C/C++ source code generated on : Fri Jun 17 11:57:01 2016
 *
 * Target selection: realtime.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_arduinomega2560_gettingstarted_h_
#define RTW_HEADER_arduinomega2560_gettingstarted_h_
#include <string.h>
#include <stddef.h>
#ifndef arduinomega2560_gettingstarted_COMMON_INCLUDES_
# define arduinomega2560_gettingstarted_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "arduino_digitaloutput_lct.h"
#include "arduino_analogoutput_lct.h"
#endif                                 /* arduinomega2560_gettingstarted_COMMON_INCLUDES_ */

#include "arduinomega2560_gettingstarted_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  int32_T clockTickCounter_c;          /* '<Root>/Pulse Generator1' */
} D_Work_arduinomega2560_gettings;

/* Parameters (auto storage) */
struct Parameters_arduinomega2560_gett_ {
  uint32_T DigitalOutput_pinNumber;    /* Mask Parameter: DigitalOutput_pinNumber
                                        * Referenced by: '<S1>/Digital Output'
                                        */
  uint32_T PWM_pinNumber;              /* Mask Parameter: PWM_pinNumber
                                        * Referenced by: '<S2>/PWM'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 10
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 5
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator1_Amp;          /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Period;       /* Computed Parameter: PulseGenerator1_Period
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Duty;         /* Computed Parameter: PulseGenerator1_Duty
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_arduinomega2560_getting {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block parameters (auto storage) */
extern Parameters_arduinomega2560_gett arduinomega2560_gettingstarte_P;

/* Block states (auto storage) */
extern D_Work_arduinomega2560_gettings arduinomega2560_gettingst_DWork;

/* Model entry point functions */
extern void arduinomega2560_gettingstarted_initialize(void);
extern void arduinomega2560_gettingstarted_output(void);
extern void arduinomega2560_gettingstarted_update(void);
extern void arduinomega2560_gettingstarted_terminate(void);

/* Real-time Model object */
extern RT_MODEL_arduinomega2560_gettin *const arduinomega2560_gettingstart_M;

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
 * '<Root>' : 'arduinomega2560_gettingstarted'
 * '<S1>'   : 'arduinomega2560_gettingstarted/Digital Output'
 * '<S2>'   : 'arduinomega2560_gettingstarted/PWM'
 */
#endif                                 /* RTW_HEADER_arduinomega2560_gettingstarted_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
