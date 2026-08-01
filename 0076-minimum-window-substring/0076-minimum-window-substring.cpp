class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        for (char ch : t) {
            mp[ch]++;
        }
        int need = mp.size();
        int i = 0, j = 0;
        int start = 0;
        int minLen = INT_MAX;
        while (j < s.size()) {
            mp[s[j]]--;
            if (mp[s[j]] == 0) {
                need--;
            }
            while (need == 0) {
                if (j - i + 1 < minLen) {
                    minLen=j-i+1;
                    start=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    need++;
                }
                i++;
            }
            j++;
        }
        if(minLen==INT_MAX){
            return "";
        }
        return s.substr(start, minLen);
    }
};