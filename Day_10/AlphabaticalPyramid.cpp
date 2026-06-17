#include<iostream>
using namespace std;
int main(){
    int m,i,j,k,a,l;
    cout<<"Enter number of rows:";
    cin>>m;
    a=m-1;
    for(i=1;i<=m;i++){
        for(k=1;k<=a;k++){
            cout<<" ";
        }
        a=a-1;
        for(j=1;j<=i;j++){
            cout<<char(j+64);
        }
        for(l=i-1;l>=1;l--){
            cout<<char(l+64);
        }
        cout<<endl;
    }
}
