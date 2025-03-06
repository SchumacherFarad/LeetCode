#include <cstdlib>
class Solution {
public:
    string convertToBase7(int num) {
        int abso = abs(num);
        string res;
        do{
            res = to_string(abso%7)+res;
        }while(abso /= 7);
        return (num<0 ? "-":"") +res;
    }
};