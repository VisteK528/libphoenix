#ifndef PHOENIX_RTOS_PROJECT_SCHEDULING_H
#define PHOENIX_RTOS_PROJECT_SCHEDULING_H



extern int setBaseQuanta(int quanta);

extern int getBaseQuanta();

extern int setQuantaForProcess(int pid, int quanta);

extern int getQuantaForProcess(int pid);

#endif //PHOENIX_RTOS_PROJECT_SCHEDULING_H
