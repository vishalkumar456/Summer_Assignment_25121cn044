#include<iostream>
using namespace std;
int main(){
    int m,i,j,k,a;
    cout<<"Enter number of rows:";
    cin>>m;
    a=1;
    for(i=m;i>0;i--){
        for(k=1;k<=a;k++){
            cout<<" ";
        }
        a=a+1;
        for(j=1;j<=(2*i)-1;j++){
            cout<<"*";
        }
        cout<<endl;

    }

}
