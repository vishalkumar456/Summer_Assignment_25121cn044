 #include<iostream>
using namespace std;
int factorial(int c){
    int f=1;
    for(int i=1;i<=c;i++){
        f=f*i;

    }
    return f;
}
int main(){
    int n,i,a,sum=0,b;
    cout<<"Enter number";
    cin>>n;
    int d=n;
    for(i=10;n!=0;){
        a=n%i;
        n=n/10;
        b=factorial(a);
        sum+=b;

    }
    cout<<sum<<endl;
    if(d==sum){
        cout<<"Strong number";
    }
    else{
        cout<<"Not strong number";
    }


}
