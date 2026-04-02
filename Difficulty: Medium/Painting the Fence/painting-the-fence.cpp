class Solution {
  public:
  int countWaysRecur(int n, int k, vector<int> &memo){
      if(n == 1) return k;
      if(n == 2) return k*k;
      
      if(memo[n] != -1) return memo[n];
      
    //   Ways in which last 2 fences
      int cnt1 = countWaysRecur(n-1, k, memo)*(k-1); // diff colour
       int cnt2 = countWaysRecur(n-2, k, memo)*(k-1); // same colour
       return memo[n] = cnt1+cnt2;
  }
    int countWays(int n, int k) {
        // code here
        vector<int> memo(n + 1, -1);
    return countWaysRecur(n, k, memo);
      
    }
};