class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        if (numRows > 0) {
            result.push_back({1});
        }
        if (numRows > 1) {
            result.push_back({1, 1});
        }
        vector<int> a = {1};
        for (int i = 2; i < numRows; i++) {
            result.push_back(a);
            for (int j = 1; j < i; j++) {
                int adder = result[i - 1][j - 1] + result[i - 1][j];
                result[i].push_back(adder);
            }
            result[i].push_back(1);
        }
        return result;
    }
};