//
// Project: Mimic
// Description: Prints the command and its
//   arguments to the stdout.
// Author: Zachary Becker
// Date: 2010-06-24
//
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	// Loops through command name and 
	// its arguements
	for (int i = 0; i < argc; i++) {
		cout << argv[i] << " ";
	}
	cout << endl;
	return 0;
}
