/*
 * File: ert_main.c
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
#include "Arduino.h"
#include "io_wrappers.h"
#define STEP_SIZE                      (unsigned long) (100000)

int_T main(void)
{
  unsigned long oldtime = 0L;
  unsigned long actualtime;
  init();
  MW_usbattach();
  arduinomega2560_gettingstarted_initialize();

#ifdef _RTT_USE_SERIAL0_

  Serial_begin(0, 9600);
  Serial_write(0, "***starting the model***", 26);

#endif

#ifdef _RTT_USE_SERIAL1_

  Serial_begin(1, 9600);

#endif

  /* The main step loop */
  while (rtmGetErrorStatus(arduinomega2560_gettingstart_M) == (NULL)) {
    actualtime = micros();
    if ((unsigned long) (actualtime - oldtime) >= STEP_SIZE) {
      oldtime = actualtime;
      arduinomega2560_gettingstarted_output();

      /* Get model outputs here */
      arduinomega2560_gettingstarted_update();
    }
  }

  arduinomega2560_gettingstarted_terminate();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
