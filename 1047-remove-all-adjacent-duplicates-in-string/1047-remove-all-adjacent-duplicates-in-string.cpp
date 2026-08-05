class Solution {
public:
    string removeDuplicates(string s) {
       for (int i = 0; i < (int)s.size() - 1; i++) {
    if (s[i] == s[i + 1]) {
        s.erase(i, 2); // remove 2 element
        i = -1; // start from begning
    }
}
        return s;  
    }
};