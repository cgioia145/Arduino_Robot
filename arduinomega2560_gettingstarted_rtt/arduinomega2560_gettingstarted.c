/*
 * File: arduinomega2560_gettingstarted.c
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

#include "arduinomega2560_gettingstarted.h"
#include "arduinomega2560_gettingstarted_private.h"

/* Block states (auto storage) */
D_Work_arduinomega2560_gettings arduinomega2560_gettingst_DWork;

/* Real-time model */
RT_MODEL_arduinomega2560_gettin arduinomega2560_gettingstart_M_;
RT_MODEL_arduinomega2560_gettin *const arduinomega2560_gettingstart_M =
  &arduinomega2560_gettingstart_M_;
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (arduinomega2560_gettingstart_M->Timing.TaskCounters.TID[1])++;
  if ((arduinomega2560_gettingstart_M->Timing.TaskCounters.TID[1]) > 4) {/* Sample time: [0.5s, 0.0s] */
    arduinomega2560_gettingstart_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model output function */
void arduinomega2560_gettingstarted_output(void)
{
  real_T rtb_PulseGenerator;
  uint8_T rtb_PulseGenerator_0;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (arduinomega2560_gettingst_DWork.clockTickCounter <
                        arduinomega2560_gettingstarte_P.PulseGenerator_Duty) &&
    (arduinomega2560_gettingst_DWork.clockTickCounter >= 0L) ?
    arduinomega2560_gettingstarte_P.PulseGenerator_Amp : 0.0;
  if (arduinomega2560_gettingst_DWork.clockTickCounter >=
      arduinomega2560_gettingstarte_P.PulseGenerator_Period - 1.0) {
    arduinomega2560_gettingst_DWork.clockTickCounter = 0L;
  } else {
    arduinomega2560_gettingst_DWork.clockTickCounter++;
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
  MW_digitalWrite(arduinomega2560_gettingstarte_P.DigitalOutput_pinNumber,
                  rtb_PulseGenerator_0);
  if (arduinomega2560_gettingstart_M->Timing.TaskCounters.TID[1] == 0) {
    /* DiscretePulseGenerator: '<Root>/Pulse Generator1' */
    rtb_PulseGenerator = (arduinomega2560_gettingst_DWork.clockTickCounter_c <
                          arduinomega2560_gettingstarte_P.PulseGenerator1_Duty) &&
      (arduinomega2560_gettingst_DWork.clockTickCounter_c >= 0L) ?
      arduinomega2560_gettingstarte_P.PulseGenerator1_Amp : 0.0;
    if (arduinomega2560_gettingst_DWork.clockTickCounter_c >=
        arduinomega2560_gettingstarte_P.PulseGenerator1_Period - 1.0) {
      arduinomega2560_gettingst_DWork.clockTickCounter_c = 0L;
    } else {
      arduinomega2560_gettingst_DWork.clockTickCounter_c++;
    }

    /* End of DiscretePulseGenerator: '<Root>/Pulse Generator1' */

    /* DataTypeConversion: '<S2>/Data Type Conversion' */
    if (rtb_PulseGenerator < 256.0) {
      if (rtb_PulseGenerator >= 0.0) {
        rtb_PulseGenerator_0 = (uint8_T)rtb_PulseGenerator;
      } else {
        rtb_PulseGenerator_0 = 0U;
      }
    } else {
      rtb_PulseGenerator_0 = MAX_uint8_T;
    }

    /* End of DataTypeConversion: '<S2>/Data Type Conversion' */

    /* S-Function (arduinoanalogoutput_sfcn): '<S2>/PWM' */
    MW_analogWrite(arduinomega2560_gettingstarte_P.PWM_pinNumber,
                   rtb_PulseGenerator_0);
  }
}

/* Model update function */
void arduinomega2560_gettingstarted_update(void)
{
  rate_scheduler();
}

/* Model initialize function */
void arduinomega2560_gettingstarted_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)arduinomega2560_gettingstart_M, 0,
                sizeof(RT_MODEL_arduinomega2560_gettin));

  /* states (dwork) */
  (void) memset((void *)&arduinomega2560_gettingst_DWork, 0,
                sizeof(D_Work_arduinomega2560_gettings));

  /* Start for S-Function (arduinodigitaloutput_sfcn): '<S1>/Digital Output' */
  MW_pinModeOutput(arduinomega2560_gettingstarte_P.DigitalOutput_pinNumber);

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  arduinomega2560_gettingst_DWork.clockTickCounter_c = 0L;

  /* Start for S-Function (arduinoanalogoutput_sfcn): '<S2>/PWM' */
  MW_pinModeOutput(arduinomega2560_gettingstarte_P.PWM_pinNumber);

  /* InitializeConditions for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  arduinomega2560_gettingst_DWork.clockTickCounter = 0L;
}

/* Model terminate function */
void arduinomega2560_gettingstarted_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
