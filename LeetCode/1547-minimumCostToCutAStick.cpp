class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        sort(cuts.begin(), cuts.end());
        int m = cuts.size();
        vector<vector<int>> dp(m + 2, vector<int>(m + 2, 0));

        for (int l = 2; l <= m + 1; l++) {
            for (int i = 0; i + l <= m + 1; i++) {
                int j = i + l;
                dp[i][j] = INT_MAX;
                for (int k = i + 1; k < j; k++) dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
                
                int left = (i == 0) ? 0 : cuts[i - 1], right = (j == m + 1) ? n : cuts[j - 1];
                dp[i][j] += right - left;
            }
        }

        return dp[0][m + 1];
    }
};
