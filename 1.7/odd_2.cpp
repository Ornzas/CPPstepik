#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a;
    //считывание
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp % 2 == 0) {
                a.push_back(temp);
        }
    }
    //обработка и вывод
    for (auto now : a) {
        cout << now << " ";
    }
    return 0;
}