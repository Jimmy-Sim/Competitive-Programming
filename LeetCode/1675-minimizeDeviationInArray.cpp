class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int> st;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] % 2 != 0) nums[i] *= 2;
            st.insert(nums[i]);
        }
        
        int mnDev = *st.rbegin() - *st.begin();
        while (*st.rbegin() % 2 == 0) {
            int temp = *st.rbegin();
            st.erase(temp);
            temp /= 2;
            st.insert(temp);
            mnDev = min(mnDev, *st.rbegin() - *st.begin());
        }

        return mnDev;
    }
};
