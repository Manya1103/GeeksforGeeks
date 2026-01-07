class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
        vector<int>ans;
        int startRow = 0; int startCol = 0;
        int endRow = n-1;
        int endCol = m-1;
        // top 
        while(startRow<= endRow && startCol <= endCol){
                for(int j = startCol; j <= endCol; j++){
            ans.push_back(mat[startRow][j]);
        }
        
        // right
        for(int i = startRow + 1; i <= endRow; i++){
             ans.push_back(mat[i][endCol]);
        }
        
        // bottom
        for(int j = endCol - 1; j >= startCol; j--){
             if(startRow == endRow){ /* corner case for odd number of rows
             (for the middle row that will be already traversed by top
              & can give duplicate results)  */
                break;
            }
             ans.push_back(mat[endRow][j]);
            
        }
        
        // left
        for(int i = endRow - 1; i >= startRow + 1; i--){
             if(startCol == endCol){ /* corner case for odd number of columns
             (for the middle column that will be already traversed by right
              & can give duplicate results)  */
                break;
            }
            ans.push_back(mat[i][startCol]);
        }
            startRow++;
            startCol++;
            endRow--;
            endCol--;
        }
       
        return ans;
        
    }
};