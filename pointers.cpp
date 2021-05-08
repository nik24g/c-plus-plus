#include<iostream>
using namespace std;

int main(){
    // what is pointers----> data type
    int a=3;
    int*b=&a;
    int**c=&b;
    int***d=&c;
    // & ---> address of operator
    cout<<"Address of a is: "<<b<<endl;
    cout<<"Address of a is: "<<&a<<endl;
    // * ----> Dereferance operator
    cout<<"The value at address b is: "<<*b<<endl;
    cout<<"The value at address b is: "<<*&a<<endl;
    cout<<"Address of b is: "<<c<<endl;
    cout<<"Address of c is: "<<d<<endl;
    cout<<"The value at address c is: "<<**c<<endl;
    return 0;
}