#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st side: ";
    cin>>a;
    cout<<"Enter 2nd side: ";
    cin>>b;
    cout<<"Enter 3rd side: ";
    cin>>c;

    if((a+b)>c && (b+c)>a && (c+a)>b) // To form a triangle, the sum of any two sides must be greater than the third side.
    {
        cout<<"The sides can form a triangle.";
    }
    else
    {
        cout<<"The sides cannot form a triangle.";
    }

    return 0;
}