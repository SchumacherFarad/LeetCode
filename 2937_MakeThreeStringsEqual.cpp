class Solution {
    public:
        int findMinimumOperations(string s1, string s2, string s3) {
            int comlen = 0;
            int ops = 0;
            int maxlength;
            for(int i = 0 ; i < max(s1.length(),max(s2.length(),s3.length())); i++){
                if(s1[i]==s2[i] && s2[i]==s3[i]){
                    comlen++;
                }
                else{
                    break;
                }
            }
            if(comlen == 0){return -1;}
            while(s1.length() != comlen){
                s1.pop_back();
                ops++;
            }
            while(s2.length() != comlen){
                s2.pop_back();
                ops++;
            }
            while(s3.length() != comlen){
                s3.pop_back();
                ops++;
            }
            return ops;
        }
    };