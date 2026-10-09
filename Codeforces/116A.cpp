// Jul. 30, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        cnt -= a;
        cnt += b;

        mx = max(mx, cnt);
    }

    cout << mx << '\n';

    return 0;
}