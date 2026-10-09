// Jul. 31, 2026

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int heights[105];
    int mx = 0, mn = 105, mxIdx, mnIdx;
    for (int i = 0; i < n; i++) {
        cin >> heights[i];

        if (heights[i] > mx) {
            mx = heights[i];
            mxIdx = i;
        }
        if (heights[i] <= mn) {
            mn = heights[i];
            mnIdx = i;
        }
    }

    int cnt = 0;
    while (mxIdx != 0) {
        swap(heights[mxIdx], heights[mxIdx - 1]);

        if (mxIdx - 1 == mnIdx) mnIdx++;
        mxIdx--;
        
        cnt++;
    }
    while (mnIdx != n - 1) {
        swap(heights[mnIdx] , heights[mnIdx + 1]);

        if (mnIdx + 1 == mxIdx) mxIdx--;
        mnIdx++;

        cnt++;
    }

    cout << cnt << '\n';

    return 0;
}