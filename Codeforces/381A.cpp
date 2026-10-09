// Aug. 3, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cards[1005], left = 1, right = n;
    for (int i = 1; i <= n; i++) cin >> cards[i];

    int sereja = 0, dima = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            if (cards[left] > cards[right]) {
                sereja += cards[left];
                left++;
            }
            else {
                sereja += cards[right];
                right--;
            }
        }
        else {
            if (cards[left] > cards[right]) {
                dima += cards[left];
                left++;
            }
            else {
                dima += cards[right];
                right--;
            }
        }
    }

    cout << sereja << ' ' << dima << '\n';

    return 0;
}