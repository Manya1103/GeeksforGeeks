class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        // int n = arr.size();
        // int rows = queries.size();
        // // int col = queries[].size();
        
        // vector<int> result;
        
        // // for(int i = 0; i < rows; i++){
        // // int low = queries[i][0];   // l
        // // int high = queries[i][1];  // r
        // // int x = queries[i][2];    // x
        
        // for (auto query : queries){
        // int low = query[0];   // l
        // int high = query[1];  // r
        // int x = query[2];    // x
        
        // int count = 0;
        // while(low <= high){
        //     int mid = low + (high - low)/2;
        //     if (arr[mid] == x ){
        //         count += 1; 
        //     } else if(arr[mid] < x){
        //         low = mid + 1;
        //     } else if(arr[mid] > x){
        //         high = mid - 1;
        //     }
            
        // }
     
        // result.push_back(count);
        
        // }
        // return result;
        
        ios_base::sync_with_stdio(false);
        vector <int> res;
        
        for(auto query : queries){
            int l = query[0];
            int r = query[1];
            int x = query[2];
            
            auto low = lower_bound(arr.begin()+l, arr.begin()+r+1, x);
            auto high = upper_bound(arr.begin()+l, arr.begin()+r+1, x);
            int freq = high - low;
            res.push_back(freq);
        }
        
        return res;
        

    }
};