class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        // vector<int> result;
        vector<vector<int>> result;

        int start = arr[0][0];
        int end = arr[0][1];
        for(int i = 0; i < n; i++){
            if (end >= arr[i][0]){
                end = max(end, arr[i][1]);
                continue;

            }  result.push_back({start, end});
               start = arr[i][0];
               end = arr[i][1];
        }
        
         result.push_back({start, end});
         return result;
    }
};