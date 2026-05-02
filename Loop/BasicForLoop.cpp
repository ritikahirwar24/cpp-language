#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of times you want to print Hello World!: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"Hello World!"<<endl;
    }
}