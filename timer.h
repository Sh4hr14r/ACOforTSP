/*
timer functionality
*/


typedef enum type_timer {REAL, VIRTUAL} TIMER_TYPE;

void start_timers(void);
double elapsed_time(TIMER_TYPE type);
