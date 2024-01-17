#include<iostream>
#include<string.h>
using namespace std;
int main(){
string s;
cin>>s;
if(s.length()>10){
    abort();
}
cout<<s[6]<<endl;

}