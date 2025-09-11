#include<iostream>
using namespace std;
int main(int argc, char *argv[]){
    cout<<"total number of argument="<<argc<<endl;
    cout<<"program name="<<argv[0]<<endl;
    for(int i=0;i<argc;i++){
        cout<<argc[i]<<endl;
    }
    cout<<"total number of argument="<<argc;
    return 0;
}