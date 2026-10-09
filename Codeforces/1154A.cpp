// Aug. 3, 2026

#include <iostream>

using namespace std;

int main()
{
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    int mx = max(x1, max(x2, max(x3, x4)));
    
    int a, b, c;
    if (x1 == mx) {
        c = mx - x2;
        a = x3 - c;
        b = x4 - c;
    }
    else if (x2 == mx) {
        c = mx - x1;
        a = x3 - c;
        b = x4 - c;
    }
    else if (x3 == mx) {
        c = mx - x1;
        a = x2 - c;
        b = x4 - c;
    }
    else {
        c = mx - x1;
        a = x2 - c;
        b = x3 - c;
    }

    cout << a << ' ' << b << ' ' << c << '\n';

    return 0;
}