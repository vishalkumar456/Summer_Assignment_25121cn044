#include <iostream>
using namespace std;
int main()
{
    int n, c = 0;
    cout << "Enter the value of n:";
    cin >> n;
    for (int i = 10; n != 0;)
    {
        n = n / i;
        c += 1;
    }
    cout << "No of digits:" << c;
}