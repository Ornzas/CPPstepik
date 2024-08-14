// Последовательность Фибоначчи определяется так: 
// F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
// Дано натуральное число A. Определите, каким по счету
// числом Фибоначчи оно является, то есть выведите такое
// число N, что F(N) = A. Если А не является числом Фибоначчи, выведите число -1.
#include <iostream>
using namespace std;

int main() {
    int a, n = 1, fib = 0;
    int n_minus_1 = 1, n_minus_2 = 0;
    cin >> a;

    while(a > fib) {
        fib = n_minus_1 + n_minus_2;
        n_minus_2 = n_minus_1;
        n_minus_1 = fib;
        ++n;
        // cout << n_minus_1 << " " << n_minus_2 << endl;
    }
    if(a == fib){
        cout << fib;
    } else {
    cout << -1;
    }
    return 0;
}