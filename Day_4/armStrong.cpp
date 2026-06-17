#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,armstrong=0,a=0,c=0;
    cout<<"enter number:";
    cin>>n;
    int z=n;
    int w=n;
    for(int i=10;n!=0;){
        n=n/10;
        c+=1;

    }
    for(int j=10;z!=0;){
        a=z%j;
        int r=(int)round(pow(a,c));
        armstrong+=r;
        z=z/10;

    }
    cout<<armstrong<<endl;
    if (w==armstrong){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not armstrong:";
    }



}
