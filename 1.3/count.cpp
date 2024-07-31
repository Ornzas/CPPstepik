#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    cout << k % n;
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a + 1) / 2) + ((b + 1) / 2) + ((c + 1) / 2);
    // На вход дается натурально число N, не превосходящее (10000000).
    cin >> n;
    cout << n / (60 * 60) % 24 << ":";
    cout << (n % (60 * 60) / 60) / 10 << (n % (60 * 60) / 60) % 10 << ":";
    cout << (n % 60) / 10 << (n % 60) % 10;
    return 0;
} 