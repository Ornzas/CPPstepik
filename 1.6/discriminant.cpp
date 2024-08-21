#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c , d = 0.0, d_1, d_2;
    cin >> a;
    cin >> b;
    cin >> c;

    d_1 = b * b;
    d_2 = 4 * a * c;
    d = d_1 - d_2;
    if (d == 0.0) {
        cout << -b / (2 * a);
    }
    if (d > 0.0) {
        d_1 = (-b - sqrt(d)) / (2 * a);
        d_2 = (-b + sqrt(d)) / (2 * a);
        if(d_1 < d_2) {
            cout << d_1 << " " << d_2;
        } else {
            cout << d_2 << " " << d_1;
        }
    }
    return 0;
}