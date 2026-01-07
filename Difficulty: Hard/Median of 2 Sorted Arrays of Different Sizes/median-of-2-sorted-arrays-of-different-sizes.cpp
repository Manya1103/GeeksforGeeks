class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // code here
        // int n = a.size();
        int m = b.size();
        for(int i = 0; i < m; i++){
            a.push_back(b[i]);
        }
         int n = a.size();
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            if (n % 2 == 0){
             return (a[n/2 - 1]+a[n/2])/2.0; 
             
            } else {
                 return a[(n / 2)];
            }
        }
    }
};