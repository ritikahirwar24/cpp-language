// Write a program to find the highest factor of a number 'n' other than n itself.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=n-1; i>=1; i--){
        if(n%i==0){
            cout<<"The highest factor of "<<n<<" other than itself is: "<<i<<endl;
            break;
        }
    }
    return 0;
}