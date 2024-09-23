#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, min = 2147483647;
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp % 2 != 0) {
                a.push_back(temp);
        }
    }
    if (a.size() > 0) {
        for (int i = 0; i <= a.size() - 1; i++) {
            if(a[i] < min) {
                min = a[i];
            }
        }
    } else {
        min = 0;
    }
    cout << min;
    return 0;
}