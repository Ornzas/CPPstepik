// Последовательность состоит из натуральных чисел и завершается
// числом 0. Определите значение наибольшего элемента последовательности.
#include <iostream>
using namespace std;

int main() {
    int now, max;
    now = 1;
    max = now;
    while (now != 0) {
        cin >> now;
        if(now > max) {
            max = now;
        }
    } 
    cout << max;
    return 0;
}