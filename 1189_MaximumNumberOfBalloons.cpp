class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> m;
        for(int i=0; i < text.length(); i+=1){
            m[text[i]] +=1;
        }
        int minballoons = m['b'];
        minballoons = (minballoons > m['a'])? m['a'] : minballoons;
        minballoons = (minballoons > (m['l']/2))? (m['l']/2) : minballoons;
        minballoons = (minballoons > (m['o']/2))? (m['o']/2) : minballoons;
        minballoons = (minballoons > m['n'])? m['n'] : minballoons;
        return minballoons;
    }
};