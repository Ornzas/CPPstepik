#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp) ;
    }
    for (int i = 0; i <= a.size() - 1; i++) {
        for (int j = i + 1; j <= a.size() - 1; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}