// Последовательность состоит из натуральных чисел и завершается числом 0.
// Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.
#include <iostream>
using namespace std;

int main() {
    int now, max, i;
    now = 1;
    i = 0;
    max = now;
    while (now != 0) {
        cin >> now;
        if(now > max) {
            max = now;
            i = 1;
        }
        if(now == max) {
            ++i;
        }

    } 
    cout << i;
    return 0;
}