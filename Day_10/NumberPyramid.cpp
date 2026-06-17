#include<iostream>
using namespace std;
int main(){
    int m,i,j,k,a,l;
    cout<<"Enter number of rows:";
    cin>>m;
    a=m-1;
    int n=1;
    for(i=1;i<=m;i++){
        for(j=1;j<=a;j++){
            cout<<" ";
        }
        a=a-1;
        for(k=1;k<=i;k++){
            cout<<k;
        }
        for(l=i-1;l>=1;l--){
            cout<<l;
        }

        cout<<endl;
    }
}
