class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        int idx = 0;
        vector<int> arr;
        // n & m - always odd -> n * m = odd
        // so, median(odd) - n+1/2
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
            // arr[idx]  = mat[i][j];
            arr.push_back(mat[i][j]);
            idx++;
        }
        }
        sort(arr.begin(), arr.end());
        return arr[arr.size()/2];
    }
};
