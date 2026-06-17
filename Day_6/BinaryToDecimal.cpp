#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int ans=0,n,pow=1,rem,i;
    cout<<"Enter binary number:";
    cin>>n;
    for(i=10;n!=0;){
        rem=n%i;
        n=n/10;
        ans+=rem*pow;
        pow=pow*2;
    }
    cout<<"Decimal number:"<<ans;


}
