// using for loop
// #include <iostream>
// using namespace std;
// int main(){
//    int n=17;

// for(int i=1;i<=10;i++){
// cout<<n<<"*"<<i<<"="<<n*i<<endl ;
// }
// return 0;
// }
// using while loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    int i = 1;
    while (i <= 10)
    {

        cout << n << "*" << i << "=" << n * i << endl;
        i++;
    }

    return 0;
}
