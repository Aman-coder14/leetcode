class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int leftsum = 0;
            int rightsum = 0;

            for (int j = 0; j < i; j++) {
                leftsum += nums[j];
            }

            for (int j = i + 1; j < n; j++) {
                rightsum += nums[j];
            }

            ans[i] = abs(leftsum - rightsum);
        }

        return ans;
    }
};