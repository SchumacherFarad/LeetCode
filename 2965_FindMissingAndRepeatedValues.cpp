class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int n = grid.size();
            long long n2 = n*n;
            vector<int> result(2);
            long long sum_to_n = n2*(n2+1)/2;
            long long sum2_to_n = n2*(n2+1)*(2*n2+1)/6;
            long long sumofgrid = 0; 
            long long int sum2ofgrid = 0;
            for(int i = 0; i < n ; i+=1){
                for(int j = 0; j < n; j+=1){
                    sumofgrid += grid[i][j];
                    sum2ofgrid += grid[i][j] * grid[i][j];
                }
            }
            int diff = sumofgrid - sum_to_n;//y-x
            int equ = sum2ofgrid - sum2_to_n;//y2 -x2
            int sum = equ/diff;//y+x
            int y = (diff+sum)/2;
            int x = (sum-diff)/2;
            result = {y,x};
            return result;
        }
    };