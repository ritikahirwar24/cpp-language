#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // Using ternary operator to check if the number is even or odd
    // The condition is (n % 2 == 0), if true, result is "Even", otherwise "Odd"
    (n % 2 == 0) ? cout << "Even" : cout << "Odd";
    
}