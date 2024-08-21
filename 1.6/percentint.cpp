#include <iostream>
using namespace std;

int main() {
    int p, x, y;
    cin >> p >> x >> y;
    x = x * 100;
    y = x + y;
    p = y + (y * p) / 100;
    cout << p / 100 << " " << p % 100;
    return 0;
}