#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, e, f, x, y;
    cin >> a >> b >> c >> d >> e >> f;
    // ax+by=e => x = (e - by) / a => (e - by) * c = (f - dy) * a => ec - fa = (bc - da) * y
    // cx+dy=f => x = (f - dy) / c
    y = (a * f - c * e) / (a * d - c * b) ;
    x = (e * d - b * f) / (a * d - b * c);
    //(e * d - b * f) / (a * d - b * c) и (a * f - c * e) / (a * d - c * b)
    cout << x << " " << y;
    return 0;
}