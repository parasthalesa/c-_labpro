#include<iostream>
using namespace std;
class emp{
    int a;
    public:void set_data(int x){
        a=x;
    }
    public:void getdata()const;
};
void emp::getdata()const{
    int y=10;
    y=200;
    cout<<"data member from set number="<<a;
    cout<<"data member from const function="<<y;

}
int main(){
    emp e;
    e.set_data(10);
    e.getdata();
    return 0;
}