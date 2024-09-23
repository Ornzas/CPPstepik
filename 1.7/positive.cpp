#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp > 0) {
            counter++;
        }
    }
    cout << counter;
    return 0;
}