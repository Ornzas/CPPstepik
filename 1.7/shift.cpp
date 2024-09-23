#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, last;
    cin >> n;
    vector <int> a, b;
    for (int i = 0; i < n - 1; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp) ;
    }
    cin >> last;
    b.push_back(last);
    for (auto now : a) {
        b.push_back(now);
    }
    for (auto now : b) {
        cout << now << " ";
    }
    return 0;
}