#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, k, count = 0;
    int line = 0;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(a[i][j] == 0){
                count++;
            } else {
                count = 0;
            }
            if(count >= k) {
                line = i + 1;
                break;
            }
        }
        if(line) {
            break;
        }

        count = 0;
    }
    cout << line;
    return 0;
}