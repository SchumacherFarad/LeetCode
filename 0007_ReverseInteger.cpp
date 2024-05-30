class Solution {
public:
    int reverse(int x) {
        if(x>=0){
            string a = to_string(x);
            string newa = "";
            for(int i = a.length()-1; i >= 0; i--){
                newa += a[i];
            }
            long result = stol(newa);
            if(stoll(newa) > 2147483647) {return 0;}
            return result;
        }
        else{
            x = abs(x);
            string a = to_string(x);
            string newa = "-";
            for(int i = a.length()-1; i >= 0; i--){
                newa += a[i];
            }
            long result = stol(newa);
            if(stoll(newa) < -2147483648) {return 0;}
            return result;
        }   
        return x;
    }
};