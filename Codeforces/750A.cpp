// Aug. 3, 2026

#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int sum = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        sum += 5 * i;

        if (sum > 240 - k) break;

        ans++;
    }

    cout << ans << '\n';

    return 0;
}