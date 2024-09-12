#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c , d = 0.0, d_1, d_2;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a == 0.0 && b == 0.0){
        if(c == 0.0)
            cout << 3;
        if(c != 0.0)
            cout << 0;
    } else if(a == 0.0 && b != 0.0){
        cout << "1 " << -c / b;
    } else {
        d_1 = b * b;
        d_2 = 4 * a * c;
        d = d_1 - d_2;
        if (d == 0.0) {
            cout << "1 " << -b / (2 * a);
        }
        if (d > 0.0) {
            d_1 = (-b - sqrt(d)) / (2 * a);
            d_2 = (-b + sqrt(d)) / (2 * a);
            cout << "2 ";
            if(d_1 < d_2) {
                cout << d_1 << " " << d_2;
            } else {
                cout << d_2 << " " << d_1;
            }
        }
        if (d < 0.0) {
            cout << 0;
        }
    }
    return 0;
}