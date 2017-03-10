#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void simple();
void dologging(void (*mylogger)(char *));
void mylog(char *);

#ifdef __cplusplus
}
#endif
