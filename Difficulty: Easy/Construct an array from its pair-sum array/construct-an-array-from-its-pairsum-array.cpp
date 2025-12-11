class Solution {
  public:
    vector<int> constructArr(vector<int>& arr) {
        // code here
        int M = arr.size(); //M = size of pair-sum array arr[]
        //  M = N * (N -1) /2;
         int N = (int)(sqrt(M*2)) + 1; // N= size of original array res[] 
         
        vector<int> res(N);
       
            
             res[0] = (arr[0] + arr[0+1] - arr[N-1]) / 2;
      
        
       for(int i=1; i<N; i++){
        res[i] = arr[i-1] - res[0];
        
}
    
        return res;
    }
};