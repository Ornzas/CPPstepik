// Определите наименьшее расстояние между двумя локальными максимумами последовательности натуральных чисел, завершающейся числом 0.
// Если в последовательности нет двух локальных максимумов, выведите число 0.

#include <iostream>
using namespace std;

int main() {
    int now, now_2 = 0, now_1 = 0, len_f = 0, len;
    cin >> now;
    int len_m = 0;
    while (now != 0) {
        if(now_1 and now_2) {
            if (now_1 > now and now_1 > now_2) {
                if(len_m == 0 and len_f) {
                    len_m = len;
                } else if(len < len_m) {
                    len_m = len;
                }
                len = 0;
                len_f = 1;
            }
        }
        if(len_f) {
            ++len;
        }
        now_2 = now_1;
        now_1 = now;
        cin >> now;
    }
    cout << len_m;
    return 0;
}