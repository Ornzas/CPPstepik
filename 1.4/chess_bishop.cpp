#include <iostream>
using namespace std;

int main() {
    int w1, b1, w2, b2;
    cin >> w1 >> b1 >> w2 >> b2;
    if (w1 - w2 == b1 - b2 || w2 - w1 == b1 - b2) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}