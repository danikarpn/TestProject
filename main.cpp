//
// Project: Mimic
// Description: Prints the command and its
//   arguments to the stdout.
// Author: Zachary Becker
// Date: 2010-06-24
//
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//
// Description: Converts the argc and argv arguments
//   typically obtained in the main function to
//   the command issued at the command line.
// int argc: The number of arguements.
// char *argv[]: Arguements to command in an array.
// Return: The command as a C++ string.
//
string CommandString(int argc, char *argv[]) {
	// Loops through command name and 
	// its arguements
	stringstream cmd;
	for (int i = 0; i < argc; i++) {
		cmd << argv[i] << " ";
	}
	return cmd.str();	
}

int main(int argc, char *argv[]) {
	cout << CommandString(argc, argv) << endl;
	return 0;
}
