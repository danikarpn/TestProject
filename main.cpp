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
// Description: Concatinates an array of c strings
//   into a single c++ string.
// int n: The number of c strings in array.
// char *array[]: An array of c strings.
// char sep: A character to seperate each string.
//
string ConcatCStrArray(int n, char *array[], char sep) {
	stringstream ccat;
	for (int i = 0; i < n; i++) {
		ccat << array[i] << sep;
	}
	return ccat.str();
}

//
// Description: Converts the argc and argv arguments
//   typically obtained in the main function to
//   the command issued at the command line.
// int argc: The number of arguements.
// char *argv[]: Arguements to command in an array.
// Return: The command as a c++ string.
//
string CommandString(int argc, char *argv[]) {
	return ConcatCStrArray(argc, argv, ' ');
}

