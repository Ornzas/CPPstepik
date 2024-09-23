#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, unique = 1;
    cin >> n;
    vector <int> a, b;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp) ;
    }
    for (int i = 0; i <= a.size() - 1; i++) {
        for (int j = 0; j <= a.size() - 1; j++) {
            if (a[i] == a[j] and i != j) {
                // cout << a[i] << " " << a[j] << endl;
                unique = 0;
            }
        }
        if(unique) {
            b.push_back(a[i]);
        }
        unique = 1;
    }
    for (auto now : b) {
        cout << now << " ";
    }
    return 0;
}