class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        int n = arr.size();
        
      vector<int> odd;
      vector<int> even;
    //   vector<int> merged;
        
        
        for (int i = 0; i < n; i++){
            if (arr[i] % 2 == 0){
                even.push_back(arr[i]);
                
            } else {
                 odd.push_back(arr[i]);
            }
        }
        
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        
      vector<int> merged;
       
       for(int val : odd)
       merged.push_back(val);
       
       for(int val : even)
       merged.push_back(val);
       
       arr = merged;
    }
};