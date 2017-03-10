#include <iostream>
#include <fstream>
#ifdef __cplusplus
extern "C"{
#endif

#include "program.h"

#ifdef __cplusplus
}
#endif


void dologging(logtype logbridge);

namespace foo
{

	/**
	 * Even though this method is passed as a function pointer
	 * to C code, there is no need to declare 'extern "C"' here.
	 * Furthermore, we can use C++ constructs in this method
	 * which will work just fine when passed into C.
	 */
	static void log(char *);


}

