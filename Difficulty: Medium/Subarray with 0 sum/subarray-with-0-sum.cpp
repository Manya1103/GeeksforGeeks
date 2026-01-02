class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        unordered_map<int,int> hash; // stores sum & how many times it has appeared

         int sum = 0; 
        for (int i = 0; i < n; i++){
            if (arr[i] == 0){
                return true;
            }
            sum += arr[i];
            if (sum == 0){
                return true;
            }
            if (hash.find(sum) != hash.end()){
                return true;
            }
            hash[sum]++;
        }
        
        
        return false;
    }
};