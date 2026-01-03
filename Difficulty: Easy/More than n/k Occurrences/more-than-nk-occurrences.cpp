class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        int n = arr.size();
        int p = n/k;
        
        sort(arr.begin(), arr.end());
        unordered_map<int, int> map;
        
        int count = 0;
        for(int i = 0; i < n; i++){
           
            if(map[arr[i]] == -1){ // handles duplicates
                continue;
            }
            
            map[arr[i]]++;
             
            if (map[arr[i]] > p){
            map[arr[i]] = -1; // handles duplicates
               count += 1;
            }
            
        } return count;
    }
};