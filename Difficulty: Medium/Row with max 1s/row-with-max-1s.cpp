// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n = arr.size();
        int m = arr[0].size();
        int idx = -1;
        int startRow = 0;
        int endRow = n - 1;
        int startCol = 0;
        int endCol = m - 1;
        while(startRow <= endRow && endCol >= 0){
            if(arr[startRow][endCol] == 1){
                idx = startRow;
                endCol--;
            }else {
                startRow++;
            }
        }
            return idx;
    }
};
