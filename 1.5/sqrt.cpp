// По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    cin >> n;
    while(i * i <= n) {
        cout << i * i << " ";
        ++i;
    }
    return 0;
}