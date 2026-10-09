// Aug. 3, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int min, max, cnt = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (i == 0) {
            min = a, max = a;
            continue;
        }

        if (a < min) {
            cnt++;
            min = a;
        }
        else if (a > max) {
            cnt++;
            max = a;
        }
    }

    cout << cnt << '\n';

    return 0;
}