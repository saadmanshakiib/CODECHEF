#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(1<=t<=(pow(10,4))){
        while(t--){
        int x,y,z;
        cin>>x>>y>>z;
            if(1<=x<=5 && 1<=y<=50 && 0<=z<=x*y){
                if(z>((x*y) * (.50))){
                    cout<<"YES"<<endl;
                           }
                           else{
                cout<<"NO"<<endl;
            }
            }
    }
    }
}