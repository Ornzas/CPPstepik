#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    if ((!(k % n) || !(k % m)) && k < n * m){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}