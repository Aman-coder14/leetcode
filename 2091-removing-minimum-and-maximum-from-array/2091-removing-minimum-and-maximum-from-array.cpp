class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini =min_element(nums.begin(),nums.end())-nums.begin();
        int maxi =max_element(nums.begin(),nums.end())-nums.begin();
        if(mini>maxi){
            swap(mini,maxi);
        }
        int front=1+maxi;
        int back=n-mini;
        int both = (1+mini)+(n-maxi);
        return min(front,min(back,both));
    }
};