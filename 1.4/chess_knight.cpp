#include <iostream>
using namespace std;

int main() {
    int w1, b1, w2, b2;
    cin >> w1 >> b1 >> w2 >> b2;
    if ((w1 - w2 == 2 || w1 - w2 == -2)
         && (b1 - b2 == 1 || b1 - b2 == -1)
         || (w1 - w2 == 1 || w1 - w2 == -1)
         && (b1 - b2 == 2 || b1 - b2 == -2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}