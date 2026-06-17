#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int b,c=0,i,a;
    cout<<"Enter number:";
    cin>>b;
    for(i=2;b!=0;){
        a=b%i;
        b=b/2;
        if(a==1){
            c+=1;
        }

    }
    cout<<"Count set digits:"<<c;
}
