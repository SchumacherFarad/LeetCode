class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        while(word1 != "" && word2 != ""){
            result += word1[0];
            result += word2[0];
            word1.erase(word1.begin());
            word2.erase(word2.begin());
        }
        while(word1 != ""){
            result += word1[0];
            word1.erase(word1.begin());
        }
        while(word2 != ""){
            result += word2[0];
            word2.erase(word2.begin());
        }
        return result;
    }
};