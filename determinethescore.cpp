#include<iostream>
using namespace std;
int main(){
    int t,x,n;
    cin>>t;
    if(t>=1&&t<=100){
        cin>>x>>n;
        if(x>=10&&x<=200 && n>=0&&n<=10){
            cout<<((x/10)*n)<<endl;
        }
    }
}