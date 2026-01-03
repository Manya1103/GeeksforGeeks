class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int m = arr1.size();
        int n = arr2.size();
        int p = arr3.size();
        
        vector<int> ans;
        
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < m && j < n && k < p){
            if(arr1[i] == arr2[j] && arr1[i] == arr3[k]){
            if(ans.empty() || ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
            }
            
            i++, j++, k++;
            }
            else if(arr1[i]<arr2[j]) i++;

            else if(arr2[j]<arr3[k]) j++;
            
            else k++;
        }
        return ans;
       
    }
};