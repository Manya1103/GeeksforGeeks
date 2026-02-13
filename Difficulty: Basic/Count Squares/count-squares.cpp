class Solution {
  public:
    int countSquares(int n) {
        // code here
        int count = 0;
        for(int i = 1; i*i < n; i++){
          count++;
        }
        return count;
    }
};