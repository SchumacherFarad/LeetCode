class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        if (s.length() != t.length()) {
            return false;
        }
        for (int i = 0; i < s.length(); i += 1) {
            m[s[i]] += 1;
        }
        for (int i = 0; i < t.length(); i += 1) {
            if (--m[t[i]] < 0) {
                return false;
            }
        }
        return true;
    }
};