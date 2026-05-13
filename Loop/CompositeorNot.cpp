// Composite means a number that has more than two factors, while prime means a number that has only two factors (1 and itself). The program takes an integer input from the user and checks whether it is prime, composite, or neither (in the case of 1).
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool flag = true; //True means prime
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag = false; //false means composite
            break;
        }
    }
    if(n==1) {
        cout << n << " is neither prime nor composite.";
    } else if(flag) {
        cout << n << " is a prime number.";
    } else {
        cout << n << " is a composite number.";
    }
}