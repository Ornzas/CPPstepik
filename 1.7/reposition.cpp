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
        a.push_back(temp);
    }
    
    for (int i = 1; i <= a.size() - 1; i += 2) {
        int temp;
        temp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = temp;
    }
    for (auto now : a) {
        cout << now << " ";
    }
    return 0;
}