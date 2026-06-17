#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int ans=0,n,pow=1,rem,i;
    cout<<"Enter decimal number:";
    cin>>n;
    for(i=2;n!=0;){
        rem=n%i;
        n=n/2;
        ans+=rem*pow;
        pow=pow*10;
    }
    cout<<"Binary number:"<<ans;


}
