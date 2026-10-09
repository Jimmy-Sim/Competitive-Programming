// Aug. 2, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int home[35], guest[35];
    for (int i = 0; i < n; i++) cin >> home[i] >> guest[i];

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n && i != j; j++) {
            if (home[i] == guest[j]) cnt++;
            if (guest[i] == home[j]) cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}