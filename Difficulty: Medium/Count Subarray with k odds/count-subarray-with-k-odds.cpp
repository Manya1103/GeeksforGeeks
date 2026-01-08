class Solution {
  public:
  // dynamic sliding window
  int atMostK(vector<int>& arr, int k) {
        int n = arr.size();
        int left = 0;
        int oddCount = 0;
        int total = 0;
        
        for(int right = 0; right < n; right++){
            // Include the current element arr[right] into the window 
            // & if odd -> increase oddcount
            if(arr[right] % 2== 1){ 
                oddCount++;
            }
            while(oddCount > k){  // If odd count > k → shrink from left
            if(arr[left] % 2== 1){
                oddCount--; // before removing arr[left] from the window,
                // if arr[left] is odd, decrease oddCount
            }
                left++; // Move the left pointer to shrink the window
            }
            total += (right - left + 1);
        // Number of valid subarrays ending at index 'right'
        // is equal to the window size which is (right - left + 1)
        }
        
        return total;
  }
    int countSubarrays(vector<int>& arr, int k) {
        
        return atMostK(arr, k) - atMostK(arr, k - 1);
        
    // Number of subarrays with exactly k odd numbers
    // = subarrays with at most k odds - subarrays with at most (k - 1) odds
    // (<=k) - (<=(k-1)) = k
    }
};