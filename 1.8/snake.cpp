#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int b[n][m];
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         cin >> a[i][j];
    //     }
    // }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            //cout << (i) % 2;
            if(i % 2 == 0){
                b[i][j] = i * m + j + 1;
            } else {
                b[i][m - j - 1] = i * m + j + 1;
            }
            // b[i][j] = i * m + j + 1;
        }
        //cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(4);
            cout << setw(4) << b[i][j];
        }
        cout << endl;
    }

    return 0;
}