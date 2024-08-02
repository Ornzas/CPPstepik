#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int r = 0;
    cin >> a >> b >> c;

    if (a == c) {
        if(a == b){
            r = 3;
        } else {
            r = 2;
        }
    }
    cout << r;
    return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;
//     int r = 0;
//     cin >> a >> b >> c;
//     if (a == c || a == b || c == b) {
//         r = 2;
//     }
//     if (a == c && a == b && c == b) {
//         r = 3;
//     }
//     cout << r;
//     return 0;
// }