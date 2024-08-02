#include <iostream>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int min = x;
    //cout << min;
    if (n < m){
        if (n - x < min) {
            min = n - x;
        }
        if (m - y < min) {
            min = m - y;
        }
    } else {
        if (m - x < min) {
            min = m - x;
        }
        if (n - y < min) {
            min = n - y;
        }
    }
    cout << min;
    return 0;
}