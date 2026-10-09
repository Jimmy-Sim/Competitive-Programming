// Aug. 7, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool box[105][105] = {};
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        for (int j = 100; j > 100 - a; j--) box[j][cnt] = true;
        cnt++;
    }

    for (int i = 1; i <= 100; i++) {
        for (int j = n - 1; j >= 1; j--) {
            if (!box[i][j]) continue;

            int idx = j;
            while (!box[i][idx + 1]) {
                swap(box[i][idx], box[i][idx + 1]);
                idx++;
                if (idx == n) break;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        int ans = 0;
        for (int j = 1; j <= 100; j++) {
            if (box[j][i]) ans++;
        }

        cout << ans << ' ';
    }

    cout << '\n';

    return 0;
}