class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int largest = arr[n-1];
         
        for (int i = n-2; i >= 0; i--){
            
            if (arr[i] < largest){
                
                 return arr[i];
            
             }
        }
        
        return -1;
        
    }
};