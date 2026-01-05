class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        
        if(n < k){  // base case
        return 0;
        }
        
        // using sliding window
        int currsum = 0;
        // int maxsum = INT_MIN;
        
        for(int i = 0; i < k; i++){  // sum of first k elements
            currsum += arr[i];
        }
        int maxsum = currsum;
        
        // slide
        for(int i = k; i < n; i++){
             currsum+=arr[i]-arr[i-k];  // remove old element (start), & add new element(in end)
             maxsum = max(maxsum, currsum); 
            
        }
        return maxsum;
    } 
    
};

/* sliding window
two types- fixed & dynamic
in this ques- fixed (in which we know the size of the subarray & it is fixed)

Unlike fixed-size sliding window (size = k always),
In dynamic sliding window, the window size keeps changing
(expands and shrinks based on a condition).
used in ques like find the shortest or longest subarray/substring
that satisfies a condition */
