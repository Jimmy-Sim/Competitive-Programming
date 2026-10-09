// Aug. 1, 2026

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char snake[55][55];
    fill(&snake[0][0], &snake[0][0] + (55 * 55), '.');
    
    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= m; j++) snake[i][j] = '#';
    }

    bool last = true;
    for (int i = 2; i <= n - 1; i += 2) {
        if (last) {
            snake[i][m] = '#';
            last = false;
        }
        else {
            snake[i][1] = '#';
            last = true;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cout << snake[i][j];
        cout << '\n';
    }

    return 0;
}