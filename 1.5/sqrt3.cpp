// Дано натуральное число N. Выведите слово YES, если число N является
// точной степенью двойки, или слово NO в противном случае.
#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1;
    bool answer = 0;
    cin >> n;
    if(n == 1){
        answer = 1;
    } else {
        while(i * 2 <= n) {
            if(n == i * 2) {
                answer = 1;
            }
            i = 2 * i;
        }
    }
    (answer) ? cout << "YES" : cout << "NO";
    return 0;
}