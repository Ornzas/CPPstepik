#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n, i = 0;
    double a, x, c = 0.0, d = 0.0;
    cin >> n;
    cin >> x;
    cin >> a;
    d = a;

    while (i != n) {
        
        cin >> a;
        d = d * x + a;
        ++i;
    }
    cout << d;
    return 0;
}