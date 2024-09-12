#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, e, f, D, Dx, Dy, x, y, k, n;
    cin >> a >> b >> c >> d >> e >> f;
    D = a * d - c * b;

    if (D != 0) {
        y = (a * f - c * e) / (a * d - c * b) ;
        x = (e * d - b * f) / (a * d - b * c);
        cout << "2 " << x << " " << y;
    } else {
        Dx = e * d - b * f;
        Dy = a * f - c * e;
        if ( Dx == 0 and Dy == 0) {
            if (a == 0 and b == 0 and c == 0 and d == 0) {
                if (e != 0 or f != 0) {
                    cout << "0";
                } else {
                    cout << "5";
                }
            } else {
                if (a == 0 and c == 0) {
                    if (b != 0) {
                        y = e / b;
                    } else {
                        y = f / d;
                    }
                    cout << "4 " << y;
                } else {
                    if (b == 0 and d == 0) {
                        if (a != 0) {
                            x = e / a;
                        } else {
                            x = f / c;
                        }
                        cout << "3 " << x;
                    } else {
                        if (b != 0) {
                            n = e / b;
                            k = - a / b;
                        } else {
                            n = f / d;
                            k = - c / d;
                        }
                        cout << "1 " << k << " "<< n;
                    }
                }
            }
        } else {
            cout << "0";
        }
    }

    return 0;
}