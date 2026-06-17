#include<iostream>
using namespace std;
int main(){
    int m,i,j,k;
    cout<<"Enter no of rows";
    cin>>m;
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            if((i==1)||(j==1)||(i==m)||(j==m)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }

}
