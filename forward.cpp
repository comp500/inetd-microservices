// CHANGE THIS TO CHANGE WHERE IT REDIRECTS TO
#define REDIRECT_ADDRESS "https://infra.link/"

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	// Declare variables
	ofstream logfile;
	time_t result = time(nullptr);

	// Open test.log for appending
	logfile.open("test.log", ios::out | ios::app);
	// Add log entry, with time and argument list
	logfile << "Connection recieved at " << asctime(localtime(&result));
	logfile << "Arguments: ";
	for (int i = 0; i < argc; i++) {
		logfile << argv[i] << " ";
	}
	logfile << endl;

	// Pipe cin into logfile until EOF on cin
	//logfile << std::cin.rdbuf();
	// Read all lines
	/*for (string line; getline(cin, line);) {
		if (line.length() < 1) {
			break;
		}
		logfile << line << endl;
	}*/

	// Return HTTP response
	cout << "HTTP/1.1 301 Moved Permanently\r\n";
	cout << "Location: " << REDIRECT_ADDRESS << "\r\n";
	// Chrome needs extra \r\n
	cout << "\r\n";

	logfile.close();
	return 0;
}
