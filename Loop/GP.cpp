// Disply this GP = 1, 2, 4, 8, 16, 32,.. upto n terms
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a = 1;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a = a * 2;
    }
}
// GP is a geometric progression where each term is found by multiplying the previous term by a constant called the common ratio. In this case, the common ratio is 2, and the first term is 1. The program takes the number of terms (n) as input and generates the GP sequence accordingly.