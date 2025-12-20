class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        // WITH SORTING
        
        // sort(arr.begin(), arr.end());
        // int largest = arr[n-1];
        
        // if (n < 2) return -1;
         
        // for (int i = n-2; i >= 0; i--){
            
        //     if (arr[i] < largest){
                
        //          return arr[i];
            
        //      }
        // }
        
        // return -1;
        
          // WITHOUT SORTING
        
          int i;
          int largest = INT_MIN;
          int secondLargest = INT_MIN;
          
        for (i = 0; i < n; i++){
            if (largest < arr[i]){
                 largest = arr[i];
             } 
             
        }
        // return largest;
        
           for (i = 0; i < n; i++){
               
            if (secondLargest < arr[i] && arr[i]!= largest){
                secondLargest = arr[i];
            }
        }
        return secondLargest;
       
        
    }
};