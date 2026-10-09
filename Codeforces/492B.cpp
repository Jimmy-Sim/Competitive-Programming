// Aug. 12, 2026

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    vector<double> lanterns(n);
    for (int i = 0; i < n; i++) cin >> lanterns[i];

    sort(lanterns.begin(), lanterns.end());

    double mx = lanterns[0];
    for (int i = 0; i < n - 1; i++) mx = max(mx, (lanterns[i + 1] - lanterns[i]) / 2);
    mx = max(mx, l - lanterns[n - 1]);

    cout << fixed << setprecision(1) << mx << '\n';

    return 0;
}