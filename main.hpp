#include <iostream>
#ifdef __cplusplus
extern "C"{
#endif

#include "program.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

#ifdef __cplusplus
}
#endif



void dologging(void (*mylogger)(char *));
void simple();

namespace foo
{
	typedef void (*logtype)(char *);
	extern "C"
	{
		void log(char *);
		//void dologging(void (*mylogger)(char *));
	}

}

