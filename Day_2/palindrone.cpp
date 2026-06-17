#include<iostream>
using namespace std;
int main(){
    int n,b=0,a=0,r1=0;
    cout<<"Enter number:";
    cin>>n;
    int d;
    d=n;
    for(int i=10;n!=0;){
        a=n%i;
        r1=r1*10;
        r1=r1+a;
        n=n/10;
    }
    if (r1==d){
        cout<<"Palindrome";
    }
    else{

        cout<<"Not palindrome";
    }



}
