class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        int n = arr.size();
        // sort(arr.begin(), arr.end());
        
        unordered_set<int> s;
        for(int &i: arr){
            s.insert(i);
        }
        vector<int>ans;
        
        for(int i = low; i <= high; i++){
            if(s.find(i)==s.end()){
            ans.push_back(i);
            }
        }
        
       return ans;
    }
};