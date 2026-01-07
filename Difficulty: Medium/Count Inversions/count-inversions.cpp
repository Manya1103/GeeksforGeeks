class Solution {
  public:
  // using merge sort (recursive algorithm)
 // Time: O(n log n)
 // Space: O(n)
    long long merge(vector<int> &arr, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        long long invCount = 0;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left++]); // add arr[left] & increment(left++)
            } else {
                temp.push_back(arr[right++]); // add arr[right] & increment(right++)
                invCount += (mid - left + 1); // count inversions
            }
        }

 // add all the remaining elements left after the comparison until the while condition 
        while (left <= mid) temp.push_back(arr[left++]);
        while (right <= high) temp.push_back(arr[right++]);

        for (int i = low; i <= high; i++) { // copy temporary array to the original array
            arr[i] = temp[i - low];
        }

        return invCount;
    }

    long long mergeSort(vector<int> &arr, int low, int high) {
        long long invCount = 0;
        if (low < high) {
            int mid = (low + high) / 2;
             // divide
            invCount += mergeSort(arr, low, mid); 
            invCount += mergeSort(arr, mid + 1, high);
            invCount += merge(arr, low, mid, high); // conquer
        }
        return invCount;
    }

    int inversionCount(vector<int> &arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};


// brute force
 // O(n^2) time complexity (TLE)
        // int n = arr.size();
        // int count = 0;
        // for (int i = 0; i < n; i++){
        //      for (int j = 0; j < n; j++){
        //          if (i < j && arr[i] > arr[j]){
        //             count += 1;
        //          }
        // }
        // };
        // return count;
        
// O(n^2) time complexity (TLE)
        // int n = arr.size();
        // int count = 0;
        // for (int i = 0; i < n; i++){
        //      for (int j = i + 1 ; j < n; j++){
        //          if (arr[i] > arr[j]){
        //             count += 1;
        //          }
        // }
        // };
        // return count;
        