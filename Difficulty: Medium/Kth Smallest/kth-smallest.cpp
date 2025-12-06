class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
    //   return arr[k - 1];
        int n= arr.size();

    //  for (int i = 0; i < n ; i++) {
    //      if(arr[0]>arr[i+1]){
    //      swap ( arr[0], arr[i+1]) ;
    //      }
    //  }
    
     // The code below uses Bubble Sort (nested loops → O(n^2) time).
     // This works for small inputs, but GFG test cases have large constraints (array size can go up to 10^5).
     // With n = 10^5, O(n^2) means around 10^10 operations, which is too slow and causes Time Limit Exceeded.
     // Therefore, Bubble Sort is not suitable here; we should use an O(n log n) method like sort() to pass all test cases.

        //  for (int i = 0; i < n-1; i++) {
        //      for(int j= 0; j< n-i-1; j++ ){
        //      if(arr[j]>arr[j+1]){
                
        //         int temp = arr[j];
        //         arr[j]=arr[j+1];
        //         arr[j+1]= temp;}
        //      }
        //  }
        return arr[k-1];
    }
    
};