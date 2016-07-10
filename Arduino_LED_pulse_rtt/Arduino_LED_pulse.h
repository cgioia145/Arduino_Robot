/*
 * File: Arduino_LED_pulse.h
 *
 * Code generated for Simulink model 'Arduino_LED_pulse'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.8 (R2015a) 09-Feb-2015
 * TLC version                    : 8.8 (Jan 20 2015)
 * C/C++ source code generated on : Fri Jun 17 12:02:27 2016
 *
 * Target selection: realtime.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Arduino_LED_pulse_h_
#define RTW_HEADER_Arduino_LED_pulse_h_
#include <stddef.h>
#include <string.h>
#ifndef Arduino_LED_pulse_COMMON_INCLUDES_
# define Arduino_LED_pulse_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "arduino_digitaloutput_lct.h"
#endif                                 /* Arduino_LED_pulse_COMMON_INCLUDES_ */

#include "Arduino_LED_pulse_types.h"

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
} DW_Arduino_LED_pulse_T;

/* Parameters (auto storage) */
struct P_Arduino_LED_pulse_T_ {
  uint32_T DigitalOutput_pinNumber;    /* Mask Parameter: DigitalOutput_pinNumber
                                        * Referenced by: '<S1>/Digital Output'
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
};

/* Real-time Model Data Structure */
struct tag_RTM_Arduino_LED_pulse_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (auto storage) */
extern P_Arduino_LED_pulse_T Arduino_LED_pulse_P;

/* Block states (auto storage) */
extern DW_Arduino_LED_pulse_T Arduino_LED_pulse_DW;

/* Model entry point functions */
extern void Arduino_LED_pulse_initialize(void);
extern void Arduino_LED_pulse_output(void);
extern void Arduino_LED_pulse_update(void);
extern void Arduino_LED_pulse_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Arduino_LED_pulse_T *const Arduino_LED_pulse_M;

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
 * '<Root>' : 'Arduino_LED_pulse'
 * '<S1>'   : 'Arduino_LED_pulse/Digital Output'
 */
#endif                                 /* RTW_HEADER_Arduino_LED_pulse_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
