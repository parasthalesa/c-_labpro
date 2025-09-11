#include<iostream>
using namespace std;
class demo{
    int arr[5];
    public:
        void value();
        void show();
};

void demo::value(){
    cout<<"enter value of array";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
}

void demo::show(){
    cout<<"value of array";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    
    demo d;
    d.value();
    d.show();
    return 0;

}