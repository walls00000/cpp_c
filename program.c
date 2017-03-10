# include "program.h"

void mylog(char *message)
{
	FILE *fp;
	fp = fopen("/tmp/program.out", "a");
	fprintf(fp, "%s\n", message);
	fclose(fp);
}

int test_main()
{
	dologging(&mylog);
	return 0;
}

void simple() {
	printf("simple\n");
}

void dologging(void (*mylogger)(char *))
{

	//mylogger = &mylog;
	const char str[] = "Hello World Everyone!";
	int strsize = strlen(str);

	char *message = (char *)malloc(strsize);
	strcpy(message, str);
	(*mylogger)(message);
}




