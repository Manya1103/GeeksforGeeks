// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        
        vector<int> res;
        res.push_back(1);

        for(int i = 2; i <= n; i++){
     
            int carry = 0;
            // multiplication 
            for (int j = 0; j < res.size(); j++) {
                int prod = res[j] * i + carry;
                res[j] = prod % 10;
                carry = prod / 10;
                
            }
               while (carry) {
                res.push_back(carry % 10);
                carry /= 10;
            }
        }
        reverse(res.begin(), res.end());
        return res;
        }
        
};
/*
factorials can overflow, so it cannot be stored in int or long long for large n,
store the number digit-by-digit in a vector
*/