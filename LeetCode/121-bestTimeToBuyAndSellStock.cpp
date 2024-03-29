#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = 10005, maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            minPrice = prices[i] < minPrice ? prices[i] : minPrice;
            maxProfit = prices[i] - minPrice > maxProfit ? prices[i] - minPrice : maxProfit;
        }

        return maxProfit;
    }
};