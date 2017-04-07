# include "program.h"

void mylog(char *message)
{
	FILE *fp;
	fp = fopen("/tmp/program.out", "a");
	fprintf(fp, "%s\n", message);
	fclose(fp);
}

/**
 * Renamed the main() function as this is now just library
 * called from a C++ main class
 */
int test_main()
{
	// notice that the compiler will still allow dologging to be
	// called this way
	dologging(&mylog);
	return 0;
}


void simple() {
	printf("simple\n");
}

/**
 * logit
 * log a message using logbridge
 */
void logit(logtype logbridge, const char *message) {
	const char * label = "logit: ";
	int size = strlen(message) + strlen(label + 1);
	char s[size];
	sprintf(s, "%s%s", label, message);
	logbridge(s);
}
/**
 * dologging takes a function pointer which has been defined by typdef
 */
void dologging(logtype logbridge)
{
	const char str[] = "Hello World from dologging method with logtype!";
	int strsize = strlen(str);
	char *message = (char *)malloc(strsize);
	strcpy(message, str);
	logbridge(message);
	logit(logbridge, "Test1");
}




