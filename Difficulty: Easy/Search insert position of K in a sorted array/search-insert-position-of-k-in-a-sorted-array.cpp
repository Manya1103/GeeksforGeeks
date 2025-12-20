class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if (arr[i] == k){
                return i;
            }
            else if(k < arr[i]){
                return i;
            }
            // } else {
            //     return n;
            // }
        }
        return n;
    }
};