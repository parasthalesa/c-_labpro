#include<iostream>
using namespace std;
class data{
    int x,y;
    public: void assign(int a,int b){
        x=a;
        y=b;
    }
    public: void display(){
        cout<<"value of x="<<x<<endl;
        cout<<"value of y="<<y<<endl;
    }
};
int main(){
    data d;
    d.assign(10,20);
    d.display();
    return 0;

}