// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        // given - row-column sorted matrix
        // int n = Mat.size();
        // int m = Mat[0].size();
        vector<int> temp;
        int idx = 0;
        for(int i = 0; i < N; i++){  // O(N^2)
            for(int j = 0; j < N; j++){
                temp.push_back(Mat[i][j]);
        }
        }
        sort(temp.begin(), temp.end()); // O((N2)log(N2)) 
        // Since log(N²) = 2 log N, so O(N2logN)
        
         for(int i = 0; i < N; i++){  // O(N^2)
            for(int j = 0; j < N; j++){
                Mat[i][j] = temp[idx++];
            }
         }
         return Mat;
    }
};
/*
Total- O(N2)+O(N2logN)+O(N2) 
Dominant term- O(N2LogN)
Time Complexity:O(N2LogN)
Auxillary Space:O(N2)
*/