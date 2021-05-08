#include<iostream>
using namespace std;

int main(){
    int a = 6;
    float b = 5.3;

    // typecasting
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<int(a + 2.3f)<<endl;
    cout<<float(b + 2)<<endl;
    
    return 0;
}