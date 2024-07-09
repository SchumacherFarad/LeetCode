#include <vector>

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxpro = 0;
        for (int i = 0; i < static_cast<int>(prices.size()); i++)
        {
            for (int j = i; j < static_cast<int>(prices.size()); j++)
            {
                if (prices[j]-prices[i] > maxpro)
                {
                    maxpro = prices[j]-prices[i];
                }
                
            }
            
        }
        return maxpro;
    }
};