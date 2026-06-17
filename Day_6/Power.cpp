#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int base,exponent,p=1,i;
    cout<<"Enter base:";
    cin>>base;
    cout<<"Enter exponent:";
    cin>>exponent;
    for(i=1;i<=exponent;i++){
        p=base*p;


    }
    cout<<p<<endl;

}
