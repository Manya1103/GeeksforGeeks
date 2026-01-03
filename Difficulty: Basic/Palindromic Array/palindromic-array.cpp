/*Complete the function below*/

class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> rev;
        
         for(int i = 0; i < n; i++){
            int reverse = 0;
            int x = arr[i];
            // reverse arr[i]
            while(x > 0){ // arr[i] > 0
               int lastdigit = x % 10; // returns last digit of arr[i]
                reverse = reverse * 10 + lastdigit;  // 0 * 10 + lastdigit
                x = x / 10; // removes last digit of arr[i] & update x
            }
            rev.push_back(reverse);
           
        }
        return arr == rev;
    }
};