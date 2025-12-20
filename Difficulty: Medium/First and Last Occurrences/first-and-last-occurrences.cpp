class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        
        // for (int i = 0; i < n; i++){
        //     if (arr[i] == x){
        //         return i;
        //     }
        // }
        // for (int i = n; i >= 0; i--){
        //     if (arr[i] == x){
        //         return i;
        //     }
        // }
        int low = 0;
        int high = n-1;
        // int p = INT_MIN; int q = INT_MIN;
         int p = -1; int q = -1;
        while (low <= high){
          int  mid = low + (high - low)/2;
            if (arr[mid] == x){
                p = mid;
               high = mid - 1;
            } else if(arr[mid] < x){
                low = mid + 1;
                
            } else if(arr[mid] > x){
                high = mid - 1;
            }
            // low++;
            // high++;
        }
        
          low = 0;
          high = n-1;
        while (low <= high){
          int  mid = low + (high - low)/2;
            if (arr[mid] == x){
                q = mid;
              low = mid + 1;
            } else if(arr[mid] < x){
                low = mid + 1;
                
            } else if(arr[mid] > x){
                high = mid - 1;
            }
        }
        vector<int> res={p,q};
        return res;
 
  
    }
};