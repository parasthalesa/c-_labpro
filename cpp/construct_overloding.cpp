#include<iostream>
using namespace std;
class emp{
    public:int a;
    emp(){
        a=0;
    }
    emp(int x,int y){
        a=x+y;
    }
    emp(int p,int q,int r){
        a=p+q+r;
    }
    public:void show(){
        cout<<"a="<<a<<endl;
    }
};
int main(){
    emp e;
    e.show();
    emp e1(10,20);
    e1.show();
    emp e2(10,20,30);
    e2.show();
    return 0;
}