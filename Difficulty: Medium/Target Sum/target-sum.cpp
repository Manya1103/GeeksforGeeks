
class Solution {
  public:
  
  int findPossibleWays(vector<int>& arr, vector<vector<int>>&dp, int i, int s,
  int &target, int &total_sum){
      if(s == target && i == arr.size()) return 1;
      
      if(i >= arr.size()) return 0;
      
      if (dp[i][s + total_sum] != -1)
        return dp[i][s + total_sum];
        
        return dp[i][s + total_sum]
        = findPossibleWays(arr, dp, i + 1, s + arr[i], target, total_sum)
             + findPossibleWays(arr, dp, i + 1, s - arr[i], target, total_sum);
      
  }
    int totalWays(vector<int>& arr, int target) {
        //  code here
        // using memoization- O(n*Sum) and O(n*Sum) Space
         int n = arr.size();
         int totalSum = 0;
         for(int i = 0; i < n; i++){
             totalSum += arr[i];
             
         }
         vector<vector<int>> dp(n , vector<int>(2*totalSum + 1, -1));
         return findPossibleWays(arr , dp , 0 , 0 , target , totalSum);

    
    }
};