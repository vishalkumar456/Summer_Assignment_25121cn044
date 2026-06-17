#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number";
    cin>>b;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if((a%i==0)&&(b%j==0)){
                c=i;
                d=j;
                if(c==d){
                    e=c;
                }
            }
        }
    }
    cout<<"HCF:"<<e;
}
