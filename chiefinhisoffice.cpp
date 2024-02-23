#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(1<=t<=100){
        int x,y;
        cin>>x>>y;
        if(2<=x<=12 && 1<=y<x){
            int q = (4*x) + y;
            cout<<q<<endl;
            q=0;
        }
    }
}