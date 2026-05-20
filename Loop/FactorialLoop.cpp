//WAP to find factorial of a number using loop.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    cout<<"Factorial of "<<n<<" is: "<<f;
}