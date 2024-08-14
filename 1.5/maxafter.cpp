// Последовательность состоит из натуральных чисел и завершается числом 0.
// Определите значение второго по величине элемента в этой последовательности,
// то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.
#include <iostream>
using namespace std;

int main() {
    int now, max, max_prev;
    cin >> now;
    max = -100;
    max_prev = max;
    // cout << max << " " << max_prev << endl;
    while (now != 0) {
       
        if(now >= max) {
            max_prev = max;
            max = now;
        }
        if(now < max) {
            // cout << "+++" << endl;
            if(now > max_prev)
                max_prev = now;
        } 

        cout << now << " "<< max << " " << max_prev << endl;
        cin >> now;
    } 
    cout << now << " "<< max << " " << max_prev << endl;
    cout << max_prev;
    return 0;
}
// 4 4 3 2  0 = 4
// 2 1  0 =1
// 2 1 2 1 0 =2
// 1 2 3 4 5 0 =4
// 1 1 2 2 4 4 0 =4

// -2 3 -1 0 =-1
// -3 -2 -1 0 =-2
// -3 -2 -1 -1 0= -1
// 3 3 4 5 =- 4
// -6 - 5 -4 1  0 = -4
// -6 -6 5 4 0 =- 4
// -1 -1 -1 4 0 =-1
// 2 -3 -2 -3 0 =-2
// -10 -9 -8 -9 -8 0= -8