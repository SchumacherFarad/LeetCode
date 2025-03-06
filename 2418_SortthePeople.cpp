class Solution {
    public:
        vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
            for(int i=0; i<heights.size(); i+=1){
                for(int j=i+1; j<heights.size(); j+=1){
                    if(heights[i] < heights[j]){
                        swap(heights[i], heights[j]);
                        swap(names[i], names[j]);
                    }
                }
            }
            return names;
        }
    };