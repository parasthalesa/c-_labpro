#include<iostream>
using namespace std;
int main(){

    int a,temp;
    cout<<"enter number of end ";
    cin>>a;
    for(int i=1;i<=a;i++){
        if(i%2==0){
            cout<<"number is even="<<i<<endl;
        }
        else{
            cout<<"number is odd="<<i<<endl;
        }

    }
    return 0;
}
