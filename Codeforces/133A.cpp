// Aug. 7, 2026

#include <iostream>

using namespace std;

int main()
{
    string p;
    getline(cin, p);

    bool yes = false;
    for (int i = 0; i < p.size(); i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            yes = true;
            break;
        }
    }

    if (yes) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}