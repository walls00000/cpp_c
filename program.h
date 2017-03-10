#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void simple();

// Define *logtype as a pointer to a 'void function(char *)'
typedef void (*logtype)(char *);

// Use the logtype
void dologging(logtype logbridge);
void mylog(char *);

#ifdef __cplusplus
}
#endif
