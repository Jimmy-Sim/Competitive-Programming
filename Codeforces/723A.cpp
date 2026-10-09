// Aug. 2, 2026

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int mx = max(a, max(b, c)), mn = min(a, min(b, c));
    int mid = a + b + c - mx - mn;

    cout << (mx - mid) + (mid - mn) << '\n';

    return 0;
}