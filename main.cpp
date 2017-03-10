#include "main.hpp"

using namespace std;

int main() {
	cout << "HELLO C++" << endl;
	// Assign logtype defined as 'logbridge' to an address
	logtype logbridge = &foo::log;

	//Call C code with logbridge logtype function pointer
	dologging(logbridge);
	simple();
}

namespace foo
{

	/**
	 * log(char * message)
	 * A static log function defined in a C++ code to be
	 * passed as a function pointer to a C program.
	 *
	 * message: the message to log
	 */
	static void log(char *message)
	{
		ofstream logfile;
		logfile.open("/tmp/cpp_foo.out", ios::app);
		logfile << "foo.log: " << message << endl;
		logfile.close();
	}




}
