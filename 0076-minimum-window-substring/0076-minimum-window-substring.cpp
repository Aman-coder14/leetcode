class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;

        // Step 1: Store frequency of every character in t
        for (char ch : t) {
            mp[ch]++;
        }
        // Number of unique characters still needed
        int need = mp.size();
        // Sliding window pointers
        int i = 0, j = 0;
        // To store the answer
        int start = 0;
        int minLen = INT_MAX;

        // Expand the window
        while (j < s.size()) {

            // Include current character in the window
            mp[s[j]]--;

            // If this character's requirement is completed
            if (mp[s[j]] == 0) {
                need--;
            }
            // If all required characters are present
            while (need == 0) {
                // Update minimum window
                if (j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    start = i;
                }
                // Remove leftmost character
                mp[s[i]]++;
                // If we now need this character again,
                // the window becomes invalid
                if (mp[s[i]] > 0) {
                    need++;
                }
                // Shrink window
                i++;
            }
            // Expand window
            j++;
        }
        // No valid window found
        if (minLen == INT_MAX)
            return "";
        // Return the smallest window
        return s.substr(start, minLen);
    }
};