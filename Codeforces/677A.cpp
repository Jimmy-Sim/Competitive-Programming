// Jul. 30, 2026

#include <iostream>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int height;
        cin >> height;

        if (height <= h) cnt++;
        else cnt += 2;
    }

    cout << cnt << '\n';

    return 0;
}