// Aug. 7, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int days[100005];
    for (int i = 0; i < n; i++) cin >> days[i];

    int cnt = 1, maxCnt = 1;
    for (int i = 1; i < n; i++) {
        if (days[i] >= days[i - 1]) cnt++;
        else cnt = 1;

        maxCnt = max(cnt, maxCnt);
    }

    cout << maxCnt << '\n';

    return 0;
}