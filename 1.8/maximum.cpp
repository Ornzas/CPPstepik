#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, max = 0, i_max, j_max;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << i << " " << j << " = " << a[i][j] << " ; ";
            if(a[i][j] > max)
                {cout << "("<< i << " " << j << " = " << a[i][j] << ") ; ";
                // cout << i << " " << j << endl;
                max = a[i][j]
                i_max = i;
                j_max = j;
            } else {
                cout << i << " " << j << " = " << a[i][j] << " ; ";
            }
        }
        cout << endl;
    }
    cout << i_max << " " << j_max;

    return 0;
}