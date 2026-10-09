// Jul. 31, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string word;
    cin >> word;

    int cnt[30] = {};
    for (int i = 0; i < n; i++) {
        if (int(word[i]) > 90) word[i] -= 32;

        cnt[int(word[i]) - 65]++;
    }

    bool pangram = true;

    for (int i = 0; i < 26; i++) {
        if (!cnt[i]) {
            pangram = false;
            break;
        }
    }

    if (pangram) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}