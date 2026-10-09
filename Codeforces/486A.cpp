// Jul. 30, 2026

#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum;
    if (n % 2 == 1) sum = -1 * ((n / 2) + 1);
    else sum = n / 2;

    cout << sum << '\n';

    return 0;
}