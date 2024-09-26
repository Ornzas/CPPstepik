#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            //cout << j - i << " ";
            if (i - j == k) {
                cout << a[i][j] << " ";
            }
        }
    }
    return 0;
}
