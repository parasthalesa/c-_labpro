#include<iostream>
using namespace std;
class emp{
public:int a;
friend emp operator - (emp & e);
emp(){};
emp(int x){
    a=x;
}
public:void show(){
    cout<<"a="<<a<<endl;
}
};
emp operator - (emp & e){
    e.a=-e.a;
    return 0;
}
int main(){
    emp s1(10);
    s1.show();
    -s1;
    s1.show();
    return 0;
}