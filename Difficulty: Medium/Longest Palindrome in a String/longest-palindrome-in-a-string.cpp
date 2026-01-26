class Solution {
  public:
    string longestPalindrome(string &s) {
        // code here
   // dynamic programming - tabulation
   int n = s.size();
   
    vector<vector<bool>> dp(n, vector<bool>(n, false)); //dp table
    
    int start = 0, maxLen = 1;

    for (int i = 0; i < n; i++)  // All substrings of length 1 are palindromes
        dp[i][i] = true;

    for (int i = 0; i < n - 1; i++) {      // Check for sub-string of length 2
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            if (maxLen<2) {
                start = i;
                maxLen = 2;
            }
        }
    }

    for (int k = 3; k <= n; k++) {     // Check for lengths greater than 2
        for (int i = 0; i < n - k + 1; ++i) {
            int j = i + k - 1;

            if (dp[i + 1][j - 1] && s[i] == s[j]) {
                dp[i][j] = true;

                if (k > maxLen) {
                    start = i;
                    maxLen = k;
                }
            }
        }
    }

    return s.substr(start, maxLen);

    }
};