#include<iostream>
using namespace std;

class data{
    private:
        int a,b,c;
    public:
        int d,e,f;
        void setdata(int a1, int b1, int c1);
        void getdata(){
            cout<<"The value of a is:"<<a<<endl;
            cout<<"The value of b is:"<<b<<endl;
            cout<<"The value of c is:"<<c<<endl;
            cout<<"The value of d is:"<<d<<endl;
            cout<<"The value of e is:"<<e<<endl;
            cout<<"The value of f is:"<<f<<endl;
        }
};
void data :: setdata(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    data local;
    local.d = 4;
    local.e = 5;
    local.f = 6;
    local.setdata(1, 2, 3);
    local.getdata();
    return 0;
}