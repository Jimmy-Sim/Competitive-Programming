// Jul. 31, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int friends[n + 5];
    for (int i = 1; i <= n; i++) cin >> friends[i];

    int ans[n + 5];
    for (int i = 1; i <= n; i++) ans[friends[i]] = i;

    for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
    cout << '\n';

    return 0;
}