#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

/*
* stringstream is a stream class to operate on strings. It implements input/output operations on memory (string) based streams.
* Also, it can be helpful in different type of parsing. The following operators/functions are commonly used here:
* 
* Operator >> Extracts formatted data.
* Operator << Inserts formatted data.
* Method str() Gets the contents of underlying string device object.
* Method str(string) Sets the contents of underlying string device object.
* 
* One common use of this class is to parse comma-separated integers from a string (e.g., "23,4,56"), example:
* 
* stringstream ss("23,4,56");
* char ch;
* int a, b, c;
* ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
*/

// Given a string of comma delimited integers, return a vector of integers.
vector<int> parseInts(string str) {
    // Complete this function
    vector<int> result;
    stringstream ss(str);

    int someInt;
    char ch;

    while (ss >> someInt) {
        result.push_back(someInt);
        ss >> ch;
    }

    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}