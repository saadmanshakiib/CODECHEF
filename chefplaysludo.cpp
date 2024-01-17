#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t>=1&&t<=6){
        while(t--){
            int x;
            cin>>x;
            if(x>=1&&x<=6){
                if(x==6){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
    }
    }
}