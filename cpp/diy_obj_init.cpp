#include<iostream>
using namespace std;
class emp{
    public:int a;
    emp(){}
    emp(int x){
        a=x;
        cout<<"a="<<a;
    }
};
int main(){
    int data;
    emp e1;
    cout<<"enter value=";
    cin>>data;
    e1=emp(data);
    return 0;
}