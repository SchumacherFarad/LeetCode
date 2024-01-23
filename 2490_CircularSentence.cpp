class Solution {
public:
    bool isCircularSentence(string sentence) {
        int i = 0;
        while(i < sentence.length()){
            while(sentence[i] != ' ' && i < sentence.length()){
                i++;
            }
            if(i == sentence.length()){
                if(sentence[i-1] != sentence[0]){
                    return false;
                }
            }
            else{
                if(sentence[i-1] != sentence[i+1]){
                    return false;
                }
            }
            i++;
        }
        return true;
    }
};