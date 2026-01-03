class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < n; i++){
            if (n % 2 == 0){
             return (arr[n/2 - 1]+arr[n/2])/2.0; // i = 0 to n
             
            } else {
                 return arr[(n / 2)];
            }
            
        }
    }
};