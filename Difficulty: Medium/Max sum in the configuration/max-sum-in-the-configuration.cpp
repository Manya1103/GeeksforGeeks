class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        // brute force (time complexity - O(n^2) & space complexity - O(1))
        // nested loops
        // int sum = 0;
        // int maxSum = 0;
        // for(int i = 0; i < n; i++){ // rotation, i = 0 -> no rotation, i = 1 -> rotate by 1 
        //     int sum = 0; 
        //     for(int j = 0; j < n; j++){ 
        //         int idx = (i + j) % n; // rotated index
        //         sum += j * arr[idx];
        //     // sum +=  i*arr[i];
        //     }
        //     maxSum = max(maxSum, sum);
        // }
        // return maxSum;
        
        
    // Using Mathematics - O(n) Time and O(1) Space
     int curSum = 0;
    for (int i = 0; i < n; i++){
        curSum += arr[i]; // sum of all elements
    }

    int currVal = 0; 
    for (int i = 0; i < n; i++){
        currVal += i * arr[i] ; // value of the current rotation
    }
        int maxSum = currVal;
        for (int i = 1; i < n; i++) { // other rotations
        int nextVal = currVal - (curSum - arr[i-1]) + arr[i-1] * (n-1); // next value using previous
        currVal = nextVal;

        maxSum = max(maxSum, nextVal);
    }
    return maxSum;
    }
};


/*
can also use rotate function in brute force,
rotate(arr.begin(), arr.begin() + 1, arr.end()); it will also give O(n^2)
*/