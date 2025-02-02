#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double power(double a, int n) {
    double some;
    if (n == 0) {
        some =  1;
    }
    if (n > 0) {
        some =  a * power(a, n - 1);
    }
    if (n < 0) {
        some = a * power(a, n + 1);
    }
    return some;
} 

int main() {
    double a;
    int n;
    cin >> a;
    cin >> n;
    if (n >= 0) {
        cout << power(a, n);
    }
    if (n < 0) {
        cout << 1 / power(a, n);
    }
    return 0;
}