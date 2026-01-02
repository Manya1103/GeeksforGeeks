// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        int  n = arr.size();
        sort(arr.begin(),arr.end());
        
      vector<vector<int>>result;
      int i = 0;    // smallest (sorted array)
      int j = n-1;  // largest (sorted array)
        
        while(i<j){
             if(arr[i] + arr[j] == 0){
             result.push_back({arr[i], arr[j]}); 
             int left = arr[i];
             int right = arr[j];
             // skip duplicates
             while (i < j && arr[i] == left) i++;
             while (i < j && arr[j] == right) j--;
        }
        else if(arr[i] + arr[j] < 0){  
            // move pointer to increase the sum as i can be a very small (or negative) number
            i++;
        } else if(arr[i] + arr[j] > 0){ 
            // move pointer to decrease the sum as j can be a very large positive number
            j--;
        }
        }
        
        return result;
        
    }
};