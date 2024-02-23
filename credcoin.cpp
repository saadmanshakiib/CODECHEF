#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(1<=t<=100){
        while(t--){
            int x,y;
            cin>>x>>y;
            if(1<=x<=100&&1<=y<=1000){
                int a = (x*y);
                int b = a/100;
                cout<<b<<endl;
            }
        }
    }
}