#include<iostream>
using namespace std;
int sum(int a,int b){
   int s=0;
    s=a+b;
    return s;
}
int main(){
    int a,b,s;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    s=sum(a,b);
    cout<<"Sum ="<<s;

}