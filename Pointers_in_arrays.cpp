#include<iostream>
using namespace std;

int main(){
    int marks[4]={4,24,11,10};
    cout<<marks+3<<endl;
    int*p = marks;
    
    // Address of marks elements
    cout<<"The address of marks elements "<<p<<endl;
    cout<<"The address of marks elements "<<p+1<<endl;
    cout<<"The address of marks elements "<<p+2<<endl;
    cout<<"The address of marks elements "<<p+3<<endl;

    // Values of marks elements
    cout<<"The value of marks elements "<<*p<<endl;
    cout<<"The value of marks elements "<<*(p+1)<<endl;
    cout<<"The value of marks elements "<<*(p+2)<<endl;
    cout<<"The value of marks elements "<<*(p+3)<<endl; 
    return 0;
}