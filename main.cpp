#include "main.hpp"

using namespace std;

int main() {
	cout << "HELLO C++" << endl;
//	logtype logbridge = &foo::dologging;

	dologging(&foo::log);
	simple();
}

namespace foo
{

	void log(char *message)
	{
		FILE *fp;
		fp = fopen("/tmp/cpp_foo.out", "a");
		fprintf(fp, "foo.logbridge: %s\n", message);
		fclose(fp);
	}




}
