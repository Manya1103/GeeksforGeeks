class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
        // code here
        int n = arr.size();
        // dutch national flag 
        int low = 0, mid = 0, high = n-1;
        
       while(mid <= high){
            if(arr[mid] < a){
             swap(arr[low++], arr[mid++]); 
            } 
            else  if(arr[mid]>=a && arr[mid]<=b){
                 mid++ ;
            
        } else if (arr[mid] > b){
            swap(arr[mid], arr[high--]);
        }
             
        }
        
      
    }
};

// C++ doesn't support chained comparisons like (a <= x <= b)
// (a <= x) is evaluated first and becomes 0 or 1 (true/false), which is then compared with b.
// Always use logical AND to check range: (x >= a && x <= b).
