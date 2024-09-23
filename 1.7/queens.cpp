#include <iostream>
#include <vector>
using namespace std;

int main() {
    int w1, b1, unique = 0;
    vector <int> h, v;
    for (int i = 0; i <= 7; i++) {
        cin >> w1;
        cin >> b1;
        h.push_back(w1);
        v.push_back(b1);
    }
    for (int i = 0; i <= 7; i++) {
        for (int j = i + 1; j <= 7; j++) {
            if (h[i] - h[j] == v[i] - v[j] || h[j] - h[i] == v[i] - v[j]
            || h[i] != h[j] && v[i] == v[j] || h[i] == h[j] && v[i] != v[j]) {
                unique = 1;
            }
        }
    }
    if(unique) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

