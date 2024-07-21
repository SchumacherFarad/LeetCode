class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> solution;
        for(int i=0; i<arr2.size() ; i++){
            for(int j=0; j<arr1.size(); j++){
                if(arr1[j]==arr2[i]){
                    solution.push_back(arr2[i]);
                    arr1.erase(arr1.begin()+j);
                    j-=1;
                }
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0; i<arr1.size(); i+=1){
            solution.push_back(arr1[i]);
        }
        return solution;
    }
};