#include<iostream>
using namespace std;
int main(){
    int m,i,j;
    cout<<"Enter no of rows:";
    cin>>m;
    for(i=m;i>=0;i--){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

}
