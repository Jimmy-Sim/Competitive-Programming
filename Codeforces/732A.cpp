// Aug. 3, 2026

#include <iostream>

using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    int cnt = k, ans = 1;
    while (cnt % 10 != 0 && (cnt - r) % 10 != 0) {
        cnt += k;
        ans++;
    }

    cout << ans << '\n';

    return 0;
}