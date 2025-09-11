#include<iostream>
using namespace std;
class demo{
    int a,b;
    friend demo sum(demo o1,demo o2);
    public: void setnumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    public: void print(){
        cout<<"a="<<a;
        cout<<"b="<<b<<endl;
    }
};
demo sum(demo o1, demo o2){
    demo o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    demo d1,d2,d3;
    d1.setnumber(2,3);
    d1.print();
    d2.setnumber(3,4);
    d2.print();
    d3=sum(d1,d2);
    d3.print();
    return 0;
}