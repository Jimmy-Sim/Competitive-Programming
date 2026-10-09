// Aug. 1, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int levels[105] = {};

    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int a;
        cin >> a;
        levels[a]++;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        levels[a]++;
    }

    bool pass = true;
    for (int i = 1; i <= n; i++) {
        if (!levels[i]) {
            pass = false;
            break;
        }
    }

    if (pass) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";

    return 0;
}