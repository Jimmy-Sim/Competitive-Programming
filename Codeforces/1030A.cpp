// Jul. 30, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool easy = true;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a == 1) {
            easy = false;
            break;
        }
    }

    if (easy) cout << "EASY\n";
    else cout << "HARD\n";

    return 0;
}