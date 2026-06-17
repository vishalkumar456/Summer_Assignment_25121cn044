#include<iostream>
using namespace std;
int prime(int n){
    int c=0,i;
    for(i=2;i<=n/2;i++){
        if (n%i==0){
            c+=1;
        }

    }
    if(c<2){
        return c;
    }
}
int main(){
    int n,i,a,b;
    cout<<"Enter number:";
    cin>>n;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            a=n/i;
            b=prime(a);
            if(b==0){
               cout<<a<<endl;

            }
        }

    }
}
