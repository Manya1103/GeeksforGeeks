class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        // code here
        int n = mat.size();
        vector<int> ans;
         // For each column start row is 0
    for (int col = 0; col < n; col++) {
        int startcol = col, startrow = 0;
        while (startcol >= 0 && startrow < n) {
            ans.push_back(mat[startrow][startcol]);
            startcol--;
            startrow++;
        }
    }
    
    // For each row start column is n-1
    for (int row = 1; row < n; row++) {
        int startrow = row, startcol = n - 1;
        while (startrow < n && startcol >= 0) {
            ans.push_back(mat[startrow][startcol]);
            startcol--;
            startrow++;
        }
    }
    
    return ans;
    
    }
};