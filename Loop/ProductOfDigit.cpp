#include<iostream>
using namespace std;
int main(){
    int n, product = 1;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        int digit = n % 10; // Get the last digit
        product *= digit; // Multiply the digit to the product
        n = n / 10; // Remove the last digit
    }
    cout << "Product of digits: " << product;
}