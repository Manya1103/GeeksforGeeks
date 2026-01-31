// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        // int n = arr.size();
        string ans = "";
        for(int i = 0; i < arr[0].size(); i++){
           char target = arr[0][i];
            for (int j = 0; j < arr.size(); j++) {
                if (arr[j][i] != target) return ans;
            }
            ans += target;
        }
         return ans;
        
    }
};