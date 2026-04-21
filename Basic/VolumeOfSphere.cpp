#include<iostream>
using namespace std;
int main(){
    int valume, radius;
    cout<<"Enter the radius of the sphere: ";
    cin>>radius;
    valume = (4/3) * 3.14 * radius * radius * radius;
    cout<<"Volume of the sphere is: "<<valume;  
}