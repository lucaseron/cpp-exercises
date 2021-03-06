#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student {
    int scores[5];
public:
    void input() {
        // reads 5 integers and saves them to 'scores'
        for (int k = 0; k < 5; k++) {
            cin >> scores[k];
        }
    }

    int calculateTotalScore() {
        // returns the sum of the student's scores
        int sum = 0;
        for (int k = 0; k < 5; k++) {
            sum = sum + scores[k];
        }
        return sum;
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student* s = new Student[n]; // an array of n students

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; i++) {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
