class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int, int> freq; // hash map to store freq of elements
        vector<int> res;
        // sliding window
        for(int i = 0; i < k; i++){
             freq[arr[i]]++;
        }
        
        res.push_back(freq.size()); // freq.size() = number of distinct elements in the window

        for(int i = k; i < n; i++){
            freq[arr[i]]++;  // add new element
             
            freq[arr[i - k]]--; // remove old element
            if (freq[arr[i - k]] == 0){
                freq.erase(arr[i - k]);
            }
            
            res.push_back(freq.size());
        }
        
        return res;
    }
};

/*
   freq[arr[i - k]]--;
    if (freq[arr[i - k]] == 0){
        freq.erase(arr[i - k]);
    }
    res.push_back(freq.size());
    
When the sliding window moves, one element leaves the window.
We first decrease its frequency in the map.

If the frequency becomes 0, it means,
that element is no longer present in the current window

However, the key still exists in the map, and
freq.size() counts keys, not valid elements.
(unordered_map does not automatically delete keys when value becomes 0.
So we must manually remove it.)

So we erase the key when its frequency becomes 0,
to make sure the map contains only elements currently inside the window.
*/
/*
freq[arr[i]]++;
- Adds arr[i] to the map
- If element already exists → increase count
- If not → creates entry with count = 1
*/