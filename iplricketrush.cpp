#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t>=1&&t<=1000){
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n>=1&&m<=pow(10,5)){
            if(n>m){
                cout<<n-m<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
    }
    }
}