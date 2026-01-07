class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        
        /* positive numbers */
        int n = arr.size();
        
        int jumps = 1;
          if (n <= 1){
            return 0;  
          } 
        
        if (arr[0]==0){
            return -1;
        }
        int maxReach = arr[0]; /* stores the farthest index that can be reached 
        using jumps taken so far */
        int steps = arr[0];     // stores how many steps we can still move
        
        for (int i = 1; i < n; i++) { // i = 0 already checked
          if(i == n - 1){
            return jumps;    // exit (no need to explore further)
          } 
         maxReach = max (maxReach, i + arr[i]); 
         steps--;
            if (steps == 0) {
            jumps = jumps + 1;
            if (i >= maxReach) return -1;
            steps = maxReach - i; //  Reinitialize steps
            // (no of steps we can take in next jump)
            }
        };

        
        return jumps;
        
    };
    
};
