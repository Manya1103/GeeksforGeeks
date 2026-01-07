class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        // dynamic sliding window
        int sum = 0;
        int ans = INT_MAX; 
        int left = 0; 
        for (int right = 0; right < n; right++) {
              sum += arr[right]; // expand
            while(sum > x){
            ans = min(ans, right - left + 1); // min length subarray
            sum -= arr[left]; //shrink
            left++;
                
            }
        }

    return ans == INT_MAX ? 0 : ans;
    }
};

/*
right - left + 1 
to calculate the length (number of elements) in the current subarray / window.
*/