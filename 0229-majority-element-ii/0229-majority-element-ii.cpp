class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> count;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            count[nums[i]]++;
            if (count[nums[i]] == n / 3+1) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};