// User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find
int Search(vector<int> vec, int K) {
    // code here
    int n = vec.size();
    int low = 0;
    int high = n - 1;

    while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(vec[mid] == K){
                return mid;
            }
            
            if(vec[low] <= vec[mid]){
                if((vec[low] <= K && K < vec[mid])){
                     high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                 if (vec[mid] < K && K <= vec[high]){
                      low = mid + 1;
                 } else {
                     high = mid - 1;
                 }
            }
    
    }
    
   return -1;
}

/*
In a sorted and rotated array, one half (left or right) is always sorted.
During binary search, check which half is sorted and see if the target lies in that half.
Then discard the other half and continue—this keeps the search in O(log n) time.
*/