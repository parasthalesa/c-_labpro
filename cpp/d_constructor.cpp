#include<iostream>
using namespace std;
class emp{
    public:int a;
    emp(){
        cout<<"enter value of a=";
        cin>>a;
    }
    public:void show(){
        cout<<"value a is="<<a<<endl;
    }
};
int main(){
    emp e;
    e.show();
    return 0;
}