class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;
        int k = 0;
        for (int x : nums) {
            if (mp[x] < 2) {
                nums[k] = x;
                k++;
                mp[x]++;
            }
        }
        return k;
    }
};