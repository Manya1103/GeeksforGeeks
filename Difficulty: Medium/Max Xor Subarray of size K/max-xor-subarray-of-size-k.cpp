class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        // int maxXOR= 0;
        
        //sliding window 
        int currXOR = 0;
        for(int i = 0; i < k; i++){
            currXOR ^= arr[i]; 
        }
        int maxXOR = currXOR;
        
        for(int i = k; i < n; i++){
             currXOR ^= arr[i]; //add new element 
             currXOR ^= arr[i-k];   // remove old element
             maxXOR = max(maxXOR, currXOR);
        }
        
        return maxXOR;
    }
};

/*
x ^ x = 0
x ^ 0 = x

example to understand for line 16 & 17

arr = [1, 2, 3, 4]
k = 3
currXOR = 1 ^ 2 ^ 3 = 0
[1, 2, 3] // 1st window
[2, 3, 4] // new window

currXOR ^= 4;   // add new element
currXOR ^= 1;   // remove old element

currXOR = (1 ^ 2 ^ 3) ^ 4 ^ 1
        = (1 ^ 1) ^ 2 ^ 3 ^ 4
        = 0 ^ 2 ^ 3 ^ 4
        = 2 ^ 3 ^ 4
        
in sum, we do sum += arr[i] - arr[i-k] //add new element & remove the old one
but in XOR, we use the above method

before shift
[arr[i-k], ..., arr[i-1]]
& after shift
[arr[i-k+1], ..., arr[i]]

*/