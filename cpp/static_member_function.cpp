#include<iostream>
using namespace std;
class demo{
    private: static int a;
    private: static int b;
    private: static void fun(){
        cout<<"value of a="<<a<<endl;
        cout<<"value of b="<<b<<endl;

    }
};
int demo::a=10;
int demo::b=20;
int main(){
    demo d1;
    cout<<"normal colling"<<endl;
    d1.fun();
    cout<<"static calling"<<endl;
    demo::fun();
    return 0;
}