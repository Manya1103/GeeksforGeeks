class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int leftmax[n];
        int rightmax[n];
        int watertrapped = 0;
        
        leftmax[0] = arr[0]; // height
        rightmax[n - 1] = arr[n - 1]; // height
        for(int i = 1; i < n; i++){
            leftmax[i] = max(leftmax[i - 1], arr[i - 1]); 
        }
        for(int i = n - 2; i >= 0; i--){
            rightmax[i] = max(rightmax[i + 1], arr[i + 1]);
        }
        
      
        for(int i = 0; i < n; i++){
            
           int currwater = min(leftmax[i], rightmax[i]) - arr[i];
           if(currwater > 0){
               watertrapped += currwater;
           }
        }
        
        return watertrapped;
    }
};