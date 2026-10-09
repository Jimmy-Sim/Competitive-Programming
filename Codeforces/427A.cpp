// Aug. 3, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a == -1) {
            if (cnt > 0) cnt--;
            else ans++;
        }
        else cnt += a;
    }

    cout << ans << '\n';

    return 0;
}