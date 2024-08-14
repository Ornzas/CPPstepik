// Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 2;
    while(n != i) {
        if(n % i==0){
            break;
        }
        ++i;
    }
    cout << i;
    return 0;
}