class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        //using set
        
        // unordered_set is a C++ STL container that stores unique (distinct) elements only, it does not allow duplicates, does not maintain sorted order, stores data in random order internally (hashing)
        // so, unordered_set<int> st; creates a hash-based container st which will store integer values, but only one copy of each value — no duplicates allowed.
       
        int n1= a.size();
        int n2= b.size();
        
         unordered_set<int> st;   //automatically removes duplicates & stores only distinct elements
        for (int i = 0; i < n1; i++){
             st.insert(a[i]);
            
        } 
        for (int i = 0; i < n2; i++){
             st.insert(b[i]);
            
        } 
         vector<int> result(st.begin(), st.end()); // copy set elements to vector
        return result; //gfg will sort it while printing
        
        
        // two-pointer approach (without using set)
        // only works with sorted arrays
        
        // sort(a.begin(), a.end());
        // sort(b.begin(), b.end());
    }
};