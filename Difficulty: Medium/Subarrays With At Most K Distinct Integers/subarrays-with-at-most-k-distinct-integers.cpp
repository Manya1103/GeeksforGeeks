class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int, int>map;
        
        int left = 0;
        int count = 0;
        for(int right = 0; right < n; right++){
            map[arr[right]]++;
           
            while(map.size() > k){
                map[arr[left]]--;
                if(map[arr[left]] == 0){
                    map.erase(arr[left]);
                    
                }
                left++;
                
            }
             count += right - left + 1;
        }
        return count;
    }
};