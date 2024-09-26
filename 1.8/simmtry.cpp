#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, flag = 1;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
            }
        }
    }
    if (!flag) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}
