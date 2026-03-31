class Solution {
  public:
    // manacher's algorithm- O(n) time & O(n) space complexity- 2*n + 3
        // - best among all for longest Palindrome substring
        // (dp, center expansion, brute force, rabin carp)
        vector<int>p;  
        
        string ms; // transformed string with # and sentinels(@ and $)
       void manacher(string &s ){ // preprocessing
        // left sentinel
        ms = "@"; 
        for (char c : s) {
            ms += "#" + string(1, c);
        }
        
        // right sentinel
        ms += "#$"; 

    }
    
    string longestPalindrome(string &s) {
        // code here
        manacher(s); 
      int n = ms.size();
      p.assign(n, 0); // creates a vector p of size n with initial value 0
      int l = 0, r = 0;
       for (int i = 1; i < n - 1; ++i) {
           
           int mirror = l + r - i;  // mirror of i around center (l + r)/2
           
            // initialize p[i] based on its mirror 
            // if within bounds
            if (i < r)
                p[i] = min(r - i, p[mirror]);

            // expand palindrome centered at i
            while (ms[i + 1 + p[i]] == ms[i - 1 - p[i]]){
                ++p[i];
            }

            // update [l, r] if the palindrome expands 
            // beyond current r
            if (i + p[i] > r) {
                l = i - p[i];
                r = i + p[i];
            }
        }
        
        int maxLen = 0, center = 0;
        for (int i = 1; i < n - 1; ++i) {
            if (p[i] > maxLen) {
                maxLen = p[i];
                center = i;
                
            }
            
        }
        int start = (center - maxLen) / 2;
        return s.substr(start, maxLen);
    }
};