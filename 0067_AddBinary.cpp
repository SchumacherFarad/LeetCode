class Solution {
    public:
        string addBinary(string a, string b) {
            stack<char> q;
            string sum = "";
            while(a.length() < b.length()){
                a = "0" + a;
            }
            while(a.length() > b.length()){
                b = "0" + b;
            }
            int adder = 0;
            for(int i = a.length()-1 ; i >= 0; i--){
                if(a[i] == '1' && b[i] == '1'&& adder == 1){
                    q.push('1');
                }
                else if (a[i] == '1' && b[i] == '1' && adder == 0){
                    q.push('0');
                    adder = 1;
                }
                else if (((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0')) && adder == 1){
                    q.push('0');
                }
                else if (((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0')) && adder == 0){
                    q.push('1');
                }
                else if (a[i] == '0' && b[i] == '0' && adder == 0){
                    q.push('0');
                }
                else if (a[i] == '0' && b[i] == '0' && adder == 1){
                    q.push('1');
                    adder = 0;
                }
            }
            if(adder == 1){
                q.push('1');
            }
            while(!q.empty()){
                sum += q.top();
                q.pop();
            }
            return sum;
        }
    };