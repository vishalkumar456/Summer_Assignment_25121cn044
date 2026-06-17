#include<iostream>
using namespace std;
int main(){
    int n, product = 1;
    cout << "Enter number :";
    cin >> n;

    if (n == 0) {
        product = 0;
    } else {
        if (n < 0) {
            n = -n;
        }
        while (n != 0) {
            int a = n % 10;
            product *= a;
            n /= 10;
        }
    }

    cout << "Product of digits: " << product;
    return 0;
}
