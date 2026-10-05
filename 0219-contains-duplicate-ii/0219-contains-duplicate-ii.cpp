class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(nums[i]==nums[j] && abs(nums[i]-nums[j])<=k){
                    return true;
                }
            }
        }
        return false;
    }
};