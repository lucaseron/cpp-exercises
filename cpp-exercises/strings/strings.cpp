#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program

	/*
	* Given two strings, a and b, separated by a new line,
	* Print:
	* First line -> two space-separated integers, representing the length of a and b respectively.
	* Second line -> print the string produced by concatenating a and b (a + b).
	* Third line -> print two strings separated by a space, a and b, except that their first characters are swapped.
	*/

	// read two lines
	string first, second;
	cin >> first >> second;

	// print their lengths, endl
	cout << first.size() << ' ' << second.size() << endl;

	// print concatenated version
	cout << first + second << endl;

	// print the two strings, first character 
	string newFirst, newSecond;
	char firstFromFirst = first[0];
	first[0] = second[0];
	second[0] = firstFromFirst;

	cout << first << ' ' << second;

	return 0;
}