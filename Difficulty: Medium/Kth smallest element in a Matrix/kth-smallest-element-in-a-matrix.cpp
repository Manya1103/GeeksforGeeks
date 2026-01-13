class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        int N = mat.size();
        vector<int> temp;
        int idx = 0;
        for(int i = 0; i < N; i++){  // O(N^2)
            for(int j = 0; j < N; j++){
                temp.push_back(mat[i][j]);
        }
        }
        sort(temp.begin(), temp.end()); // O((N2)log(N2)) 
        // Since log(N²) = 2 log N, so O(N2logN)
        
        return temp[k - 1];
    }
};
