class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        
         long n = arr.size() + 1 ;
        long sum = 0;   // sum of given numbers 
        long aSum = (n*(n+1))/2; // sum of n natural numbers
        
         for(int i = 0; i < arr.size(); i++ ){
             
            sum = sum + arr[i];
            
         }
         
        //  int missing = aSum - sum;
         return (aSum - sum);
         
    }
}; 