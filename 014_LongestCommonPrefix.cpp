class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = strs[0];
        for(int i = 1; i < strs.size(); i++){
            string tempcom = "";
            for(int j = 0; j < min(common.length(), strs[i].length()); j++){
                if(common[j] != strs[i][j]){
                    j = min(common.length(), strs[i].length())+1;
                }
                else{
                    tempcom += common[j];
                }
            }
            common = tempcom;
        }
        return common;
        }
};