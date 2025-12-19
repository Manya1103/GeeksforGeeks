class Solution {
  public:
    int findMoves(vector<int>& chairs, vector<int>& passengers) {
        // code here
        int n = chairs.size(); //size of both arrays are equal
        // int m = passengers.size();
        
        sort(chairs.begin(), chairs.end());
        sort(passengers.begin(), passengers.end());
        
        int moves = 0;
        for (int i = 0; i < n ; i++){
            // for (int i = 0; i < n ; i++){ 
            /* it should be one passenger to one chair not every passenger to every chair*/
                
                int diff = abs(passengers[i] - chairs[i]); //absolute value
                moves = moves + diff;
                
            // }
         
            
        }   return moves;
    }
    
};