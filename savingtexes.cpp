#include<iostream>
#include<string.h>
using namespace std;
int main(){
int t;
cin>>t;
if(t>=1&&t<=100){
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y>=1&&y<x&&y<=100){
            cout<<x-y<<endl;
        }
    }
}


}