// Display this AP - 1 3 5 7 9.. upto 'n' terms.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    // int firstTerm = 1;
    // int commonDifference = 2;

    cout << "The AP series is: ";
    for (int i = 1; i<=2*n-1; i+=2) {
        cout << i << " ";
    }
}