#ifndef TIMER_H_
#define TIMER_H_
extern int numOfAlarms;
void alarmCounter();
void sigint_handler(int signum);
#endif