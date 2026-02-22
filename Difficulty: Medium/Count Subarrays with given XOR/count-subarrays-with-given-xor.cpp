class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int xorval = 0;
        int count = 0;
        unordered_map<int, int> mp;
        
        for(int val: arr){
           xorval ^= val;
           count = count + mp[xorval ^ k];
           
            if (xorval == k)
            count++;
            
        mp[xorval]++;
        
        }
        return count;
    }
};

// O(n) Time and O(n) Space