/*
 * File: Arduino_LED_pulse.c
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

#include "Arduino_LED_pulse.h"
#include "Arduino_LED_pulse_private.h"

/* Block states (auto storage) */
DW_Arduino_LED_pulse_T Arduino_LED_pulse_DW;

/* Real-time model */
RT_MODEL_Arduino_LED_pulse_T Arduino_LED_pulse_M_;
RT_MODEL_Arduino_LED_pulse_T *const Arduino_LED_pulse_M = &Arduino_LED_pulse_M_;

/* Model output function */
void Arduino_LED_pulse_output(void)
{
  real_T rtb_PulseGenerator;
  uint8_T rtb_PulseGenerator_0;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (Arduino_LED_pulse_DW.clockTickCounter <
                        Arduino_LED_pulse_P.PulseGenerator_Duty) &&
    (Arduino_LED_pulse_DW.clockTickCounter >= 0L) ?
    Arduino_LED_pulse_P.PulseGenerator_Amp : 0.0;
  if (Arduino_LED_pulse_DW.clockTickCounter >=
      Arduino_LED_pulse_P.PulseGenerator_Period - 1.0) {
    Arduino_LED_pulse_DW.clockTickCounter = 0L;
  } else {
    Arduino_LED_pulse_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  if (rtb_PulseGenerator < 256.0) {
    if (rtb_PulseGenerator >= 0.0) {
      rtb_PulseGenerator_0 = (uint8_T)rtb_PulseGenerator;
    } else {
      rtb_PulseGenerator_0 = 0U;
    }
  } else {
    rtb_PulseGenerator_0 = MAX_uint8_T;
  }

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_digitalWrite(Arduino_LED_pulse_P.DigitalOutput_pinNumber,
                  rtb_PulseGenerator_0);
}

/* Model update function */
void Arduino_LED_pulse_update(void)
{
  /* (no update code required) */
}

/* Model initialize function */
void Arduino_LED_pulse_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Arduino_LED_pulse_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Arduino_LED_pulse_DW, 0,
                sizeof(DW_Arduino_LED_pulse_T));

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_pinModeOutput(Arduino_LED_pulse_P.DigitalOutput_pinNumber);

  /* InitializeConditions for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  Arduino_LED_pulse_DW.clockTickCounter = 0L;
}

/* Model terminate function */
void Arduino_LED_pulse_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
