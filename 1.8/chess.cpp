#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n, m, c = 1;
    cin >> n >> m;
    int b[n][m];
    

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if((i + j) % 2 == 0 )
                {
                    b[i][j] = c;
                    c++;
                } else {
                    b[i][j] = 0;
                }
            }
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