#include<iostream>
using namespace std;
class emp{
    emp(){};
    public: int a;
    emp (int x){
        a=x;
    }
    public:void show(){
        cout<<"a="<<a<<endl;
    }
    void operator -(){
        a=-a;
        cout<<"operator over loding";
    }
};
int main(){
    emp e(10);
    e.show();
    -e;
    e.show();
    return 0;
}

