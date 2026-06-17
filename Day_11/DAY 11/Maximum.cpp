#include<iostream>
using namespace std;
int maximum (int a,int b){
   int max;
   if(a>b){
    max=a;
   }
   else{
    max=b;
   }
}
int main(){
    int a,b,max;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    max=maximum(a,b);
    cout<<"Maximum ="<<max;

}