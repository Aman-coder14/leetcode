class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mmp;
        for(int num : nums){
            mmp[num]++;
        }
        for(auto x : mmp){
            if(x.second==1){
                return x.first;
            }
        }
        return -1;
    }
};