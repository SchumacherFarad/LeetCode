class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m;
        for(int i = 0; i < magazine.length(); i+=1){
            m[magazine[i]] +=1;
        }
        for(int i = 0; i < ransomNote.length(); i+=1){
            if(--m[ransomNote[i]]<0){
                return false;
            }
        }
        return true;
    }
};