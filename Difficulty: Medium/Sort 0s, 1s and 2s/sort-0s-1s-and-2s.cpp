class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        // two-pass algorithm
 // Sorts the array by counting 0s, 1s, and 2s and then rewriting them in order.
        int n = arr.size();
        int i;
        int c0s = 0;
        int c1s = 0;
        int c2s = 0;
        for (i=0; i<n; i++){
        if (arr[i]==0){
            c0s+=1;
        }else if (arr[i]==1){
            c1s+=1;
        }else if (arr[i]==2){
            c2s+=1;
        }
        }
        int idx=0;
        for (i=0; i<c0s; i++){
            arr[idx++] = 0;
        
        }
         for (i=0; i<c1s; i++){
             arr[idx++] = 1;
        
        } for (i=0; i<c2s; i++){
            arr[idx++] = 2;
        
        }
    }
};