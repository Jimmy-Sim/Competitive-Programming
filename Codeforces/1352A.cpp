// Aug. 1, 2026

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int tth = n / 10000, th = (n % 10000) / 1000, h = (n % 1000) / 100, te = (n % 100) / 10, o = n % 10;
        int cnt = 0;

        if (tth != 0) cnt++;
        if (th != 0) cnt++;
        if (h != 0) cnt++;
        if (te != 0) cnt++;
        if (o != 0) cnt++;

        cout << cnt << '\n';
        if (tth != 0) cout << 10000 * tth << ' ';
        if (th != 0) cout << 1000 * th << ' ';
        if (h != 0) cout << 100 * h << ' ';
        if (te != 0) cout << 10 * te << ' ';
        if (o != 0) cout << o << ' ';
        cout << '\n';
    }

    return 0;
}