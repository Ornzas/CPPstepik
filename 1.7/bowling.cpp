#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    int l, r;
    cin >> n;
    cin >> k;
    vector <char> sequence;
    for (int i = 0; i <= n - 1; i++) {
        sequence.push_back('I');
    }
    for (int i = 0; i <= k - 1; i++) {
        cin >> l;
        cin >> r;
        for (int j = l - 1; j <= r - 1; j++) {
            sequence[j] = '.';
        }
    }

    for (auto now : sequence) {
        cout << now;
    }
    return 0;
}
