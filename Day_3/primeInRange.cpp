#include<iostream>
using namespace std;
int main(){
    int n,i,c=0;
    cout<<"Enter number";
    cin>>n;
    for (i=1;i<=n/2;i++){
        if(n%i==0){
            c+=1;
        }
    }
    if (c<2){
        cout<<"Prime number";
    }
    else{
        cout<<"Composite number";
    }
}
