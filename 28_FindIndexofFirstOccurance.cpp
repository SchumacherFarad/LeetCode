class Solution {
public:
    int strStr(string haystack, string needle) {//abc(3),c(1)
        if(haystack.length()<=1){
            if(haystack == needle){
                return 0;
            }
        }
        for(int i = 0; i < haystack.length(); i++){
            int j=0;
            while(haystack[i+j] == needle[j] && j < needle.length()){
                j++;
            }
            if(j == needle.length()){
                return i;
            }
        }
        return -1;
    }
};