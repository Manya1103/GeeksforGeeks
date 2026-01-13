// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& mat) {
    // Your code goes here
    int n = mat.size();
    for(int i = 0; i < n; i++){
         for(int j = i + 1; j < n; j++){
             swap(mat[i][j] , mat[j][i]); // Transpose the Matrix
             //Convert rows into columns 
         }
    }
    
    for(int i = 0; i < n; i++){
         for(int j = 0; j < n/2; j++){
            swap(mat[i][j] , mat[i][n-1-j]);  // Reverse Each Row
             
         }
    }
}

/*
Time Complexity: O(n^2)
Auxiliary Space: O(1)
*/