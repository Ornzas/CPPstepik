#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, max = 0, i, j, temp;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cin >> i >> j;
    for (int k = 0; k < n; k++) {
        temp = a[k][i];
        a[k][i] = a[k][j];
        a[k][j] = temp;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}