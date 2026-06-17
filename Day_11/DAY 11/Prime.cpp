#include<iostream>
using namespace std;
int prime(int n){
    int c=0,i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            c+=1;
        }
    }
    return c;
}
int main(){
    int n,b;
    cout<<"Enter number:";
    cin>>n;
    b=prime(n);
    if(b==0){
        cout<<"Prime number";
    }
    else{
        cout<<"Composite number";
    }
}