class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int characters[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            characters[s[i] - 'a']++;
            characters[t[i] - 'a']--;
        }
        for(int i=0;i<26;i++){
            if(characters[i]!=0){
                return false;
            }
        }
        return true;
    }
};