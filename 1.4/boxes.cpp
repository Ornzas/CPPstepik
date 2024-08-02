#include <iostream>
using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2, swap;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if(a1 > b1) {
        swap = a1;
        a1 = b1;
        b1 = swap;
    }
    if(a1 > c1) {
        swap = c1;
        c1 = a1;
        a1 = swap;
    }
    if(b1 > c1) {
        swap = b1;
        b1 = c1;
        c1 = swap;
    }
    if(a2 > b2) {
        swap = a2;
        a2 = b2;
        b2 = swap;
    }
    if(a2 > c2) {
        swap = c2;
        c2 = a2;
        a2 = swap;
    }
    if(b2 > c2) {
        swap = b2;
        b2 = c2;
        c2 = swap;
    }
    if(a1 == a2 && b1 == b2 && c1 == c2) {
        cout << "Boxes are equal";
    } else if((a1 <= a2 && b1 <= b2 && c1 <= c2)) {
        cout << "The first box is smaller than the second one";
    } else if((a1 >= a2 && b1 >= b2 && c1 >= c2)) {
        cout << "The first box is larger than the second one";
    } else {
        cout << "Boxes are incomparable";
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int a1, b1, c1, a2, b2, c2, swap;
//     cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
//     if(a1 > b1) {
//         swap = a1;
//         a1 = b1;
//         b1 = swap;
//     }
//     if(a1 > c1) {
//         swap = c1;
//         c1 = a1;
//         a1 = swap;
//     }
//     if(b1 > c1) {
//         swap = b1;
//         b1 = c1;
//         c1 = swap;
//     }
//     if(a2 > b2) {
//         swap = a2;
//         a2 = b2;
//         b2 = swap;
//     }
//     if(a2 > c2) {
//         swap = c2;
//         c2 = a2;
//         a2 = swap;
//     }
//     if(b2 > c2) {
//         swap = b2;
//         b2 = c2;
//         c2 = swap;
//     }
//     if(a1 == a2 && b1 == b2 && c1 == c2) {
//         cout << "Boxes are equal";
//     } else if((a1 <= a2 && b1 <= b2 && c1 < c2)
//            || (a1 <= a2 && b1 < b2 && c1 <= c2)
//            || (a1 < a2 && b1 <= b2 && c1 <= c2)) {
//         cout << "The first box is smaller than the second one";
//     } else if((a1 >= a2 && b1 >= b2 && c1 > c2)
//            || (a1 >= a2 && b1 > b2 && c1 >= c2)
//            || (a1 > a2 && b1 >= b2 && c1 >= c2)) {
//         cout << "The first box is larger than the second one";
//     } else {
//         cout << "Boxes are incomparable";
//     }
//     return 0;
// }