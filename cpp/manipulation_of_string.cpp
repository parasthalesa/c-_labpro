#include<iostream>
#include<string>
using namespace std;
class emp{
    public:char a[20],b[20];
    emp(char * x[],char * y[]){
        strcpy(a,x);
        strcpy(b,y);
    }
    void operator + (){
        strcat(a,b);
        return 0;
    }
    public:void show(){
        cout<<"string concated="<<a;
    }
};
int main(){
    emp e("good","morning");
    +e;
    e.show();
    return 0;
};