// Aug. 11, 2026

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long x = (n / a) + (n % a != 0), y = (m / a) + (m % a != 0);

    cout << x * y << '\n';

    return 0;
}