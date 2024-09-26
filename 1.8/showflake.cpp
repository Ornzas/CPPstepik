#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == j or i == n / 2 or j == n / 2 or n - i - 1 == j){
                cout << "* ";
            } else {
                cout << ". ";
            }
        }

        cout << endl;
    }
    return 0;
}
