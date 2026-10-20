class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest = 0;
        unordered_set<int> st(nums.begin(), nums.end());
        for (int x : st) {
            if (st.find(x - 1) == st.end()) {
                int count = 1;
                int curr = x;
                while (st.find(curr + 1) != st.end()) {
                    count++;
                    curr++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};