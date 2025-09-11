#include<iostream>
using namespace std;
class demo{
    int a;
    public: void setnumber(int a1);
    public: void sum(demo o1,demo o2);
};
void demo::setnumber(int a1){
    a=a1;
}
void demo::sum(demo o1 , demo o2){
    cout<<"sum="<<o1.a+o2.a;
}
int main(){
    demo d1,d2,d3;
    d1.setnumber(10);
    d2.setnumber(20);
    d3.sum(d1,d2);
    return 0;
}