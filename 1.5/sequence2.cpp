// Дана последовательность натуральных чисел, завершающаяся числом 0.
// Определите, какое наибольшее число подряд идущих элементов этой
// последовательности равны друг другу. Если не нашлось ни одной пары,
// тройки и т.д. элементов, равных друг другу, то программа должна вывести число 1.
#include <iostream>
using namespace std;
int main() {
    int now, i, max = -1, now_prev;
    i = 1;
    cin >> now;
    now_prev = now;
    while (now != 0) {
        cin >> now;
        if(now == now_prev) {
            ++i;
        }
        if(now != now_prev) {
            if(i >= max) {
                max = i;
            }
            i = 1;
        }
        cout << "n " << now << " i " << i << endl;
        now_prev = now;
    } 
    cout << max;
    return 0;
}