#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if (a > 0){
        cout << a;
    } else {
        cout << -a;
    }

    if (a > 0) {
        cout << a;
    }
    if (a < 0) {
        cout << -a;
    }

    int b, c;
    cin >> b >> c;
    if (b == c) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    if (a * 2 == b) {
        cout << "Yes";
    }

    return 0;
}