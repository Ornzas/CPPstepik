#include <iostream>
using namespace std;

int main() {
    int a, b, c, m;
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        m = a;
    }
    if (b >= a && b >= c) {
        m = b;
    }
    if (c >= b && c >= a) {
        m = c;
    }
    cout << m;
    return 0;
}