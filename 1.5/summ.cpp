// Определите сумму всех элементов последовательности, завершающейся числом 0.
#include <iostream>
using namespace std;

int main() {
    int now, summ;
    now = -1;
    summ = 0;
    while (now != 0) {
        cin >> now;
        summ += now;
    } 
    cout << summ;
    return 0;
}