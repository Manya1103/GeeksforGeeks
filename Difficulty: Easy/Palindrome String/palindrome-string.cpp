class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int n = s.length();
    //     string rev = reverse(s.begin(), s.end());
    //     if (s == rev){
    //         return true;
    //     } else {
    //         return false;
    //     }
    // }
    int i = 0;
    while ( i < n){
        if (s[i] == s[n - 1 - i]){
            // return true;
            i++;
        } else {
            return false;
            break;
        }
    } return true;
    }
    
};