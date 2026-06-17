#include<iostream>
using namespace std;
int main(){
    int n,s=0,a=0;
    cout<<"Enter number:";
    cin>>n;
    for(int i=10;n!=0;){
        a=n%i;
        s=s+a;
        n=n/10;

    }
    cout<<"Sum of digits :"<<s;

}
