class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        map<char, int> m;
        for (int i = 0; i < stones.length(); i += 1)
        {
            m[stones[i]]++;
        }
        int sum = 0;
        for (int i = 0; i < jewels.length(); i += 1)
        {
            sum += m[jewels[i]];
        }
        return sum;
    }
};