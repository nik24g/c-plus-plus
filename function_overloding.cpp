#include<iostream>
using namespace std;

//function overloading is creating a function with multi times with same name
int sum(int x, int y, int z){
    cout<<"\n3 argument function is used\nresult is: ";
    return (x+y+z);
}
int sum(int x, int y){
    cout<<"\n2 argument function is used\nresult is: ";
    return (x+y);
}
int main(){
    int a,b,c;
    cout<<"The sum of 3no. is"<<sum(1,2,3);
    cout<<"\nThe sum of 2no. is"<<sum(1,2);
    return 0;
}