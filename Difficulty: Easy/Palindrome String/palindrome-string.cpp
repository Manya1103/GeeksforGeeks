class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int n = s.length();
        int i = 0;
        while(i < n/2){
            if(s[i] == s[n-1-i]){
                i++;
            } else {
                return false;
                
            }
        }
        return true;
    }
};