class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int n = arr.size();
        int highest = arr[0];
        int count = 1;
        for(int i = 1; i < n; i++){
            if(arr[i] > highest){
                highest = arr[i];
                    count += 1;
                
            } else if(arr[i] == highest){
                 highest = arr[i];
                    count += 1;
            }
        }
        return count;
    }
};