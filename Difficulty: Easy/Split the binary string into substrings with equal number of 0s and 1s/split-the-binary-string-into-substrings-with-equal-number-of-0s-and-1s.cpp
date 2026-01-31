class Solution {
  public:
    int maxSubStr(string str) {
        // Write your code here
        int n = str.size();
        int count=0; int track=0;
        for(int i = 0; i < n; i++){
            (str[i]=='0')? track++:track--;
            if (track==0) count++; // balanced substring 
        }
         return (track==0)? count:-1;
    }
};
