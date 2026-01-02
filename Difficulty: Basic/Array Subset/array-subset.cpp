class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        int m = a.size();
        int n = b.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int j = 0;
        int i = 0;
          while(i < m && j < n){
            if(a[i] == b[j]){
                i++;
                j++;
            } else if(a[i]<b[j]){
               i++;
           } else {
               return false;
           }
            
        }
          return (j==n);
    }
};