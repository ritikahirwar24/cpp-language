// Q: Take input percentage of a student and print the grade according to marks:
// A: 81-100 Very Good, B: 61-80 Good, C: 41-60 Average, D: <= 40 Fail.

#include <iostream>
using namespace std;
int main() {
    float percentage;
    cout << "Enter the percentage of the student: ";
    cin >> percentage;

    if (percentage >= 81 && percentage <= 100) {
        cout << "Grade: Very Good" << endl;
    } else if (percentage >= 61 && percentage < 81) {
        cout << "Grade: Good" << endl;
    } else if (percentage >= 41 && percentage < 61) {
        cout << "Grade: Average" << endl;
    } else if (percentage <= 40) {
        cout << "Grade: Fail" << endl;
    } else {
        cout << "Invalid percentage entered." << endl;
    }

    return 0;
}