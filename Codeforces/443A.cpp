// Aug. 1, 2026

#include <iostream>

using namespace std;

int main()
{
    string set;
    getline(cin, set);

    int cnt[30] = {};
    for (int i = 0; i < set.size(); i++) {
        if (set[i] == '{' || set[i] == ',' || set[i] == ' ' || set[i] == '}') continue;

        cnt[int(set[i]) - 97]++;
    }

    int ans = 0;
    for (int i = 0; i < 26; i++) if (cnt[i]) ans++;

    cout << ans << '\n';

    return 0;
}