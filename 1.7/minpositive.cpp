#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, min;
    cin >> n;
    vector <int> a;
    //считывание
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp > 0) {
                a.push_back(temp);
        }
    }
    for (int i = 0; i <= a.size() - 1; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }
    cout << min;
    return 0;
}