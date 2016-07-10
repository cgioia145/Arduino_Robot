/*
 * File: ert_main.c
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
#include "Arduino.h"
#include "io_wrappers.h"
#define INIT_TIMER_VAL                 62411
#define SETUP_PRESCALER                TCCR3B |= ((1<<CS32)); TCCR3B &= ~((1<<CS31) | (1<<CS30))
#define INTERRUPT_VECTOR               TIMER3_OVF_vect
#define DISABLE_TIMER                  TIMSK3 &= ~(1<<TOIE3)
#define ENABLE_TIMER                   TIMSK3 |= (1<<TOIE3)
#define TIMER_NORMAL_MODE              TCCR3A &= ~((1<<WGM31) | (1<<WGM30)); TCCR3B &= ~((1<<WGM33) | (1<<WGM32))
#define RESET_TIMER                    TCNT3 = INIT_TIMER_VAL

volatile int IsrOverrun = 0;
boolean_T isRateRunning[1] = { 0 };

boolean_T need2runFlags[1] = { 0 };

/*
 * The timer interrupt handler (gets invoked on every counter overflow).
 */
ISR(INTERRUPT_VECTOR)
{
  RESET_TIMER;
  rt_OneStep();
}

/*
 * Configures the base rate interrupt timer
 */
static void arduino_Timer_Setup()
{
  // Sets up the timer overflow interrupt.
  RESET_TIMER;

  // Initially disable the overflow interrupt (before configuration).
  DISABLE_TIMER;

  // Set the timer to normal mode.
  TIMER_NORMAL_MODE;

  // Set the prescaler.
  SETUP_PRESCALER;

  // Enable the overflow interrupt.
  ENABLE_TIMER;
}

void rt_OneStep(void)
{
  boolean_T eventFlags[1];

  /* Check base rate for overrun */
  if (isRateRunning[0]++) {
    IsrOverrun = 1;
    isRateRunning[0]--;                /* allow future iterations to succeed*/
    return;
  }

  sei();

  /*
   * For a bare-board target (i.e., no operating system), the
   * following code checks whether any subrate overruns,
   * and also sets the rates that need to run this time step.
   */
  Arduino_LED_pulse_output();

  /* Get model outputs here */
  Arduino_LED_pulse_update();
  cli();
  isRateRunning[0]--;
  if (eventFlags[0]) {
    if (need2runFlags[0]++) {
      IsrOverrun = 1;
      need2runFlags[0]--;              /* allow future iterations to succeed*/
      return;
    }
  }

  if (need2runFlags[0]) {
    if (isRateRunning[1]) {
      /* Yield to higher priority*/
      return;
    }

    isRateRunning[0]++;
    sei();
    switch (0) {
     default:
      break;
    }

    cli();
    need2runFlags[0]--;
    isRateRunning[0]--;
  }
}

int_T main(void)
{
  init();
  MW_usbattach();

#ifdef _RTT_USE_SERIAL0_

  Serial_begin(0, 9600);
  Serial_write(0, "***starting the model***", 26);

#endif

#ifdef _RTT_USE_SERIAL1_

  Serial_begin(1, 9600);

#endif

  Arduino_LED_pulse_initialize();
  arduino_Timer_Setup();

  /* The main step loop */
  while (rtmGetErrorStatus(Arduino_LED_pulse_M) == (NULL)) {
  }

  Arduino_LED_pulse_terminate();

  /* Disable Interrupts */
  cli();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
