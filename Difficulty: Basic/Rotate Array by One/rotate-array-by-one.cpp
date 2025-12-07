// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n= arr.size();

        for (int i = 0; i < n; i++){
            int temp = arr[i];
            arr[i]=arr[n-1];
            arr[n-1] = temp;

        }
    }
};