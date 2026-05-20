// WAP to find the sum of even digits of an given number.
#include<iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 0) {
        int digit = n % 10; // Get the last digit
        if (digit % 2 == 0) { // Check if the digit is even
            sum += digit; // Add the even digit to the sum
        }
        n /= 10; // Remove the last digit
    }
    cout << "The sum of even digits is: " << sum << endl;
    return 0;
}