class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        int startRow = 0; int startCol = 0;
        int endRow = n-1;
        int endCol = m-1;
          while(startRow <= endRow && endCol>=0){
            if(mat[startRow][endCol]==x){
                 return true;
            } else if (mat[startRow][endCol] > x){
                endCol--;
            }  else if (mat[startRow][endCol] < x){
                startRow++;
            }
            
            
        }
        return false;
                
    }
};