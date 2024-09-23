#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, flag = 1;
    cin >> n;
    vector <int> a;
    //считывание
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
        if (i > 0) {
            if (temp > 0 & a[i - 1] > 0 & flag) {
                if(a[i - 1] >= temp) {
                    cout << temp << " " << a[i - 1];
                } else {
                    cout << a[i - 1] << " " << temp;
                }

                flag = 0;
            }
            if (temp < 0 & a[i - 1] < 0 & flag) {
                if(a[i - 1] >= temp) {
                    cout << temp << " " << a[i - 1];
                } else {
                    cout << a[i - 1] << " " << temp;
                }
                flag = 0;
            }
        }
    }
    return 0;
}