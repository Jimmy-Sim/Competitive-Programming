// Jul. 31, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = 1, previous;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        if (i == 0) {
            previous = a;
            continue;
        }

        if (a != previous) cnt++;

        previous = a;
    }

    cout << cnt << '\n';
}