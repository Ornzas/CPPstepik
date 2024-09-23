#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, last;
    cin >> n;
    cin >> last;
    vector <int> a;
    for (int i = 0; i < n - 1; i++) {
        int temp;
        cin >> temp;
        if (temp != last) {
                a.push_back(temp);
        }
        last = temp;
    }
    cout << a.size() + 1;
    return 0;
}