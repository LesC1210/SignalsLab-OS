#include "timer.h"
#include <stdio.h>
#include <stdlib.h>

int numOfAlarms = 0;
void alarmCounter() {
  numOfAlarms++;
}

void sigint_handler(int signum) { // SIGINT signal handler
  printf("\n%d number of alarms occured.\n", numOfAlarms);
  exit(0);
}