class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        unordered_set<int>set;
        for(int i = 0; i < n; i++){
            set.insert(a[i]);
        }
        for(int i = 0; i < m; i++){
            set.insert(b[i]);
        }
        
        return vector<int>(set.begin(),set.end());
    }
};