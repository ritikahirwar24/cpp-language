#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        int digit = n % 10; // Get the last digit
        sum += digit; // Add the digit to the sum
        n = n / 10; // Remove the last digit
    }
    cout << "Sum of digits: " << sum;
}