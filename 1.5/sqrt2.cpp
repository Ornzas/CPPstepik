// По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.
#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    cin >> n;
    cout << "1 ";
    while(i * 2 <= n) {
        cout << i * 2 << " ";
        i = 2 * i;
    }
    return 0;
}