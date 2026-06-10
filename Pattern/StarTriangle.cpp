#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of sides: ";
    cin>>n;

    for(int i=1;i<=n;i++){ // outer loop (i) rows cantrol karta hai 
        for(int j=1;j<=i;j++){ // inner loop (j) har row mai stars ki quantity cantrol karta hai
            cout<<"* ";
        }
        cout<<endl;
    }
}