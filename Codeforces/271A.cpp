// Jul. 30, 2026

#include <iostream>

using namespace std;

bool distinct(int a, int b, int c, int d) {
    if (a != b && a != c && a != d && b != c && b != d && c != d) return true;
    return false;
}

int main()
{
    int y;
    cin >> y;

    while (true) {
        y++;

        int thousands = y / 1000, hundreds = (y / 100) % 10, tens = (y / 10) % 10, ones = y % 10;

        if (distinct(thousands, hundreds, tens, ones)) break;
    }

    cout << y << '\n';

    return 0;
}