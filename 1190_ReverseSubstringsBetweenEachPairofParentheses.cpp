#include <stack>
#include <queue>
#include <algorithm>

class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> front;
        for(int i = 0; i < s.length(); i+=1){
            if(s[i] == '('){
                front.push(i);
            }
            else if(s[i] == ')'){
                int frontindex=front.top();
                front.pop();
                reverse(s.begin()+frontindex,s.begin()+i);
            }
        }
        string newst;
        for(int i=0; i<s.length(); i+=1){
            if(s[i]!='(' && s[i]!=')'){
                newst+=s[i];
            }
        }
        return newst;
    }
};