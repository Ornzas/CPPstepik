#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n, m, c = 0, i, j, d = 0;
    cin >> n >> m;
    int i_e = n, j_e = m;
    int a[n + 2][m + 2];
    int b[n + 2][m + 2];
    for(int i = 0; i < n + 2; i++){
        for(int j = 0 ; j < m + 2; j++){
            a[i][j] = 1;
        }
    }
    for(int i = 0; i < n + 2; i++){
        a[i][0] = 0;
        a[i][m + 1] = 0;
    }
    for(int j = 0 ; j < m + 2; j++){
        a[0][j] = 0;
        a[n + 1][j] = 0;
    }
    i = 1;
    j = 1;

    while(c < n * m){
        c++;
        a[i][j] = 0;
        b[i][j] = c;
        if (d == 0) {
            if(a[i][j + 1] == 0) {
                i++;
                d = 1;
                continue;
            }else{
                j++;
            }
        }
        if (d == 1) {
            if(a[i + 1][j] == 0) {
                j--;
                d = 2;
                continue;
            }else{
                i++;
            }
        }
        if (d == 2) {
            if(a[i][j - 1] == 0) {
                i--;
                d = 3;
                continue;
            }else{
                j--;
            }
        }
        if (d == 3) {
            if(a[i - 1][j] == 0) {
                j++;
                d = 0;
                continue;
            } else {
                i--;
            }
        }
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            cout.width(4);
            cout << setw(4) << b[i][j] << "";
        }
        cout << endl;
    }

    return 0;
}