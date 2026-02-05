class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        // sliding window
        int n = arr.size();
        int left = 0;
        int count = 0; // zero count
        int longest = 0;
        for(int right = 0; right < n; right++){
            if(arr[right]==0){
                count++;  // expand
            }
        // Shrink window if zero count exceeds k
        while(k < count && left <= right){
            if(arr[left] == 0){
               count--;
            }
               left++;
            }
            longest = max(longest, right-left+1);
        }
        return longest;
    }
};


// tc - O(n) 
// sc - O(n) 