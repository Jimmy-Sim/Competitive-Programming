// Aug. 16, 2026

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[200005];
        for (int i = 0; i < n; i++) cin >> arr[i];

        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] - arr[i] == j - i) cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}