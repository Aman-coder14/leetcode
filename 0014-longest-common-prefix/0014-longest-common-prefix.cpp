class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string first = strs.front();
        string last = strs.back();
        string ans = "";
        int len = min(first.size(), last.size());
        for (int i = 0; i < len; i++) {
            if (first[i] == last[i]) {
                ans += first[i];
            } else {
                break;
            }
        }
        return ans;
    }
};