// Последовательность Фибоначчи определяется так:
// F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
// По данному числу N определите N-е число Фибоначчи F(N).
#include <iostream>
using namespace std;

int main() {
    int n, i, fib;
    int n_minus_1 = 1, n_minus_2 = 0;
    cin >> n;
    if (n >= 2) {
        i = 2;
        while(i <= n) {
            fib = n_minus_1 + n_minus_2;
            n_minus_2 = n_minus_1;
            n_minus_1 = fib;
            ++i;
            // cout << n_minus_1 << " " << n_minus_2 << endl;
        }
        n = fib;
    }
    cout << n;
    return 0;
}