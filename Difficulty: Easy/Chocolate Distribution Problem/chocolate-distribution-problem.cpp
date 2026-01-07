class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n = a.size();
        sort(a.begin(), a.end());
        if (m > n) return -1;
         if(n == m){
             return a[n-1] - a[0];
             
         }
         
        int minDiff = a[m - 1] - a[0];
    
        for(int i = m; i < n; i++){
          minDiff = min(minDiff, a[i] - a[i - m + 1]); /* a[i] - a[i - m + 1] to find the
          window's boundaries with size m (not adding/ removing any element here,
          only checking range)
          */
        }
        
        return minDiff;
    }
};