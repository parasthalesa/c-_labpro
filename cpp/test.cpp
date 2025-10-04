#include<iostream>
#include<vector>
using namespace std;
class emp{
    public:int r,c;
   vector<vector<int>> arr;
    emp(int a, int b){
        r=a;
        c=b;
        arr.resize(r, vector<int>(c));
    }
    public:void value(){
        int i,j;
        for(i=1;i<=r;i++){
            for(j=0;j<=c;j++){
                cout<<"enter value=";
                cin>>arr[i][j];
            }
        }
    }
    public:void print(){
        cout<<"enter print";
        for(int i=0;i<=r;i++){
            for(int j=0;j<=c;j++){
                
                cin>>arr[i][j];
                cout<<endl;
            }
        }
    }
};
int main(){
    int a,b;
     cout<<"enter value of row=";
        cin>>a;
        cout<<"enter value of column=";
        cin>>b;
    emp e1(a,b);
    e1.value();
    e1.print();
    return 0;
}