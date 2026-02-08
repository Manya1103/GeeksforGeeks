class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n = arr.size();
        int maxProduct = arr[0];
        int ma = arr[0];  // ma = max & mi = min
        int mi = arr [0]; 
        for (int i = 1; i < n; i++){
            /*If current element is negative, swap because max becomes min and min becomes max because 
            of the multiplication of two negative numbers */
            
            if (arr[i] < 0){ 
               swap (ma, mi);
            }
             ma = max(arr[i], ma * arr[i]);
             mi = min(arr[i], mi * arr[i]);
            
            maxProduct = max (maxProduct, ma);
            
        }
        
        return maxProduct;
        
        /*brute force- O(n3) - TLE(Time limit exceeded)
          brute force- O(n2) - TLE(Time limit exceeded) (only 1010/1112 testcase passed)
          brute force method is same as we used in maxsum subarray but giving tle here */
        
        
        // brute force code with time complexity O(n2)
        // int maxProduct = INT_MIN;
 
        // for (int start = 0; start < n; start++){
        //       int currProduct = 1;
        //     for (int end = start; end < n; end++){
              
        //     currProduct = currProduct * arr[end];
                
        //     maxProduct = max (maxProduct, currProduct);
            
        //     }
           
           
            
        // }
        
        // return maxProduct;
        
    }
};