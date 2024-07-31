#include <iostream>
using namespace std;

int main()
{
    int h, a, b;
    cin >> h >> a >> b;
    cout << (h / (a - b) + h % (a - b) / a);
    return 0;
}