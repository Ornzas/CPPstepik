#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int now = -1, summ = 0;
    int i = -1;
    while (now != 0) {
        cin >> now;
        summ += now;
        ++i;
    }
    cout << setprecision(11) << fixed;
    cout << (double)summ / i;
    return 0;
}