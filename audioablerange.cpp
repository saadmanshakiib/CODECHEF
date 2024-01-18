#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t>=1&&t<=pow(10,4)){
        int x;
        cin>>x;
        if(x>=67&&x<=45000){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}