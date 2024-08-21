#include <iostream>
using namespace std;

int main() {
    int p, x, y, k, v, i;
    cin >> p >> x >> y >> k;
    i = 0;
    x = x * 100;
    y = x + y;
    while(i != k) {
        y = y + (y * p) / 100;
        ++i;
    }
    cout << y / 100 << " " << y % 100;
    return 0;
}