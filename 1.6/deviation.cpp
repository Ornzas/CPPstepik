#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    long int now = -1, summ = 0, summ_2 = 0;
    int i = -1;
    while (now != 0) {
        cin >> now;
        summ += now;
        summ_2 += now * now;
        ++i;
    }
    cout << setprecision(11) << fixed;
    cout << sqrt((summ_2 - (double) (summ * summ) / i) / (i - 1));
    return 0;
}