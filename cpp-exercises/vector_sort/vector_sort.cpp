#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
* ## Challenge ##
*
* You are given N integers. Sort the N integers and print the sorted order.
* Store the N integers in a vector. Vectors are sequence containers representing arrays that can change in size.
*
* Declaration:
* vector<int> v; // creates an empty vector of integers.
*
* Size:
* int size = v.size();
*
* Pushing an integer into a vector:
* v.push_back(x); // where x is an integer. the size increases by 1 after this.
*
* Popping the last element from the vector:
* v.pop_back(); // after this the size decreases by 1.
*
* Sorting a vector:
* sort(v.begin(), v.end()); // will sort all the elements in the vector.
*/

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int i;

	// create a vector to hold the N integers
	vector<int> victor;

	// read N (number of integers)
	int numberIntegers;
	cin >> numberIntegers;

	// create an int to hold temp values
	int temp;

	// read the N integers
	for (i = 0; i < numberIntegers; i++) {
		cin >> temp;
		victor.push_back(temp);
	}

	// sort the integers
	sort(victor.begin(), victor.end());

	// output: print the integers in the sorted order one by one in a single line followed by a space.
	for (i = 0; i < numberIntegers; i++) {
		cout << victor[i];

		if (i != numberIntegers - 1) cout << ' ';
	}

	return 0;
}
