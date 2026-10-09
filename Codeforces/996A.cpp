// Aug. 1, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0;

    cnt += (n / 100);
    n %= 100;

    cnt += (n / 20);
    n %= 20;

    cnt += (n / 10);
    n %= 10;

    cnt += (n / 5);
    n %= 5;

    cnt += n;

    cout << cnt << '\n';

    return 0;
}