class Solution {
    public:
        vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
            vector<vector<int>> filteredres;
            for(int i = 0; i< restaurants.size(); i++){
                if((veganFriendly == 0 || (restaurants[i][2] == 1 && veganFriendly == 1)) && restaurants[i][3] <= maxPrice && restaurants[i][4] <= maxDistance){
                    filteredres.push_back(restaurants[i]);
                }
            }
            for(int i = 0; i< filteredres.size() ; i++){
                for(int j = i+1 ; j< filteredres.size(); j++){
                    if(filteredres[i][1] < filteredres[j][1]){
                        int temp[5] = {filteredres[i][0],filteredres[i][1],filteredres[i][2],filteredres[i][3],filteredres[i][4]};
                        filteredres[i] = {filteredres[j][0],filteredres[j][1],filteredres[j][2],filteredres[j][3],filteredres[j][4]};
                        filteredres[j] = {temp[0],temp[1],temp[2],temp[3],temp[4]};
                    }
                }
            }
            for(int i = 0; i< filteredres.size() ; i++){
                for(int j = i+1 ; j< filteredres.size(); j++){
                    if(filteredres[i][1] == filteredres[j][1] && filteredres[i][0] < filteredres[j][0]){
                        int temp[5] = {filteredres[i][0],filteredres[i][1],filteredres[i][2],filteredres[i][3],filteredres[i][4]};
                        filteredres[i] = {filteredres[j][0],filteredres[j][1],filteredres[j][2],filteredres[j][3],filteredres[j][4]};
                        filteredres[j] = {temp[0],temp[1],temp[2],temp[3],temp[4]};
                    }
                }
            }
            vector<int> sortedres;
            for(int i = 0; i < filteredres.size(); i++){
                sortedres.push_back(filteredres[i][0]);
            }
            return sortedres;
        }
    };