// Aug. 16. 2026

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int block = k / (n - 1);
        cout << ( * block) + (k % (n - 1)) << '\n';
    }

    return 0;
}

// 1 2 ;    
// 4 5 ;
// 7 8 ;
// 10 11;

// 1 2 3 ;
// 5 6 7 ;
// 9 10 11 ;
// 13 14 15;