#include <iostream>
using namespace std;

int main() {
    int w1, b1, w2, b2;
    cin >> w1 >> b1 >> w2 >> b2;
    if ((w1 - w2 <= 1 && w1 - w2 >= -1) && (b1 - b2 <= 1 && b1 - b2 >= -1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     cout << (((a - c) * (a - c) > 1) || ((b - d) * (b - d) > 1) ? "NO" : "YES");
//     return 0;
// }