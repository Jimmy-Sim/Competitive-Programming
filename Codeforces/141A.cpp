// Aug. 2, 2026

#include <iostream>

using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    int both[30] = {}, total[30] = {};
    for (int i = 0; i < a.size(); i++) both[int(a[i]) - 65]++;
    for (int i = 0; i < b.size(); i++) both[int(b[i]) - 65]++;
    for (int i = 0; i < c.size(); i++) total[int(c[i]) - 65]++;

    bool possible = true;
    for (int i = 0; i < 26; i++) {
        if (both[i] != total[i]) {
            possible = false;
            break;
        }
    }

    if (possible) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}