#include <vector>
class Solution {
public:
    bool isPathCrossing(string path) {
        vector<vector<int>> v;
        int x=0,y=0;
        v.push_back({x,y});
        for(int i = 0; i < path.length(); i++){
            if(path[i] == 'N'){y++;}
            if(path[i] == 'S'){y--;}
            if(path[i] == 'E'){x++;}
            if(path[i] == 'W'){x--;}
            v.push_back({x,y});
        }
        for(int i = 0; i < v.size(); i++){
            for(int j = i+1; j < v.size() ; j++){
                if(v[i] == v[j]){
                    return true;
                }
            }
        }
        return false;
    }
};