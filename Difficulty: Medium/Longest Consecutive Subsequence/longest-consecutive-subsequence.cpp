class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int count = 1;
        int maxcount = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] + 1 == arr[i + 1]){
                count += 1;
                
            } else if(arr[i+1] == arr[i]){  // handle duplicates
                 continue;
                 
             } else {
                 maxcount = max(maxcount, count);
                 count = 1;
             }
            
        }
        return maxcount;
    }
};