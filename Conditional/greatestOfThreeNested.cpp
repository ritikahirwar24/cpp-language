#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"Greatest is: "<<a;
        }
        else{
            cout<<"Greatest is: "<<c;
        }
    }
    else{
        if(b>c){
            cout<<"Greatest is: "<<b;
        }
        else{
            cout<<"Greatest is: "<<c;
        }
    }
}