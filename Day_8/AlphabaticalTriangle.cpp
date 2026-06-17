#include<iostream>
using namespace std;
int main(){
    int m,n,i,j;
    cout<<"Enter no of rows:";
    cin>>m;
    for(i=1;i<=m;i++){
        for(j=1;j<=i;j++){
            cout<<char(j+64);
        }
        cout<<endl;
    }
}
