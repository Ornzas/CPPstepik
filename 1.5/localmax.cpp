// Дана последовательность натуральных чисел, завершающаяся числом 0.
// Определите количество строгих локальных максимумов в этой последовательности.
#include <iostream>
using namespace std;

int main() {
    int now, now_2 = 0, now_1 = 0;
    cin >> now;
    
    int count = 0;
    while (now != 0) {
        if(now_1 and now_2) {
            if (now_1 > now and now_1 > now_2) {
                ++count;
                // cout << " l.max";
            }
        }
        now_2 = now_1;
        now_1 = now;
        cin >> now;
    } 
    cout << count;
    return 0;
}