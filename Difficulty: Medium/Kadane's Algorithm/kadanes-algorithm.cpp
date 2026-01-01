class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n =arr.size();
        int currsum = 0;
        int maxsum = INT_MIN;
        for (int i = 0; i < n; i++) {
             if (currsum < 0){
                currsum = 0;
            }
            currsum = currsum + arr[i];
           
            maxsum = max(maxsum, currsum);
        }

        return maxsum;
    }
};