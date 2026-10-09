// Jul. 31. 2026

#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    char ans[a.size() + 5];
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) ans[i] = '1';
        else ans[i] = '0';
    }

    for (int i = 0; i < a.size(); i++) cout << ans[i];
    cout << '\n';

    return 0;
}