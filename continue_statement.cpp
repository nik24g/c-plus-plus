#include<iostream>
using namespace std;

int main(){
    for(int ns=0; ns<=5; ns++){
        if(ns==2){
            continue;
        }
        cout<<ns<<endl;
    }
    return 0;
}