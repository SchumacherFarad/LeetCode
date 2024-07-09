class Solution
{
public:
    double averageWaitingTime(vector<vector<int>> &customers)
    {
        int time = 0;
        for (int i = 0; i < customers.size(); i = i + 1)
        {
            if (time < customers[i][0])
            {
                time = customers[i][0];
            }
            time += customers[i][1];
            customers[i].push_back(time - customers[i][0]);
        }
        double total = 0;
        for (int i = 0; i < customers.size(); i = i + 1)
        {
            total += customers[i][2];
        }
        return total / customers.size();
    }
};