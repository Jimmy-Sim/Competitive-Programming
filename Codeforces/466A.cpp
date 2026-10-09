// Aug. 16, 2026

#include <iostream>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    int sum = 0;
    if (double(b) / m <= a) {
        sum += int(n / m) * b;

        if (n % m != 0) sum += min((n % m) * a, b);
    }
    else sum += n * a;

    cout << sum << '\n';
    
    return 0;
}