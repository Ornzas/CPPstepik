#include <iostream>
using namespace std;

int main() {
    int a, b, c, swap;
    cin >> a >> b >> c;
    if(a > b) {
        swap = a;
        a = b;
        b = swap;
    }
    if(a > c) {
        swap = c;
        c = a;
        a = swap;
    }
    if(b > c) {
        swap = b;
        b = c;
        c = swap;
    }

    cout << a << " " << b << " " << c;
    return 0;
}