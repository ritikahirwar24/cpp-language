#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter an integer: ";
    cin>>x;
    float y = (float)x; // typecasting  
    cout<<"Half of "<<x<<" is: "<<y/2;
}