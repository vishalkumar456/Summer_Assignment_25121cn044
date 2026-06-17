#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter number:";
    cin>>n;
    int d=n;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(d==sum){
        cout<<"Perfect number";
    }
}
