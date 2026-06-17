#include<iostream>
using namespace std;
int factorial(int n){
    int fac=1,i;
    for(i=1;i<=n;i++){
        fac=fac*i;
    }
    return fac;
}
int main(){
    int n,fac;
    cout<<"Enter number:";
    cin>>n;
    fac=factorial(n);
    cout<<"Factorial of number:"<<fac;


}