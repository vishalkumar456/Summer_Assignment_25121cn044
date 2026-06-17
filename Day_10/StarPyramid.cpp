#include<iostream>
using namespace std;
int main(){
    int m,i,j,k,a;
    cout<<"Enter number of rows:";
    cin>>m;
    a=m-1;
    int ns=1;
    for(i=1;i<=m;i++){
        for(k=1;k<=a;k++){
            cout<<" ";

        }
        a=a-1;
        for(j=1;j<=ns;j++){
            cout<<"*";

        }
         ns=ns+2;
        cout<<endl;

    }

}
