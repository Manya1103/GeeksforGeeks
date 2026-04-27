class Solution {
  public:
    int smallestSubstring(string s) {
        // code here
        int n = s.length();
        int left = 0;
        vector<int> freq(3, 0); // for '0','1','2'
        int minLen = INT_MAX; int count = 0;

        for (int right = 0; right < n; right++) {
             int idx = s[right] - '0'; // convert char to idx

        freq[idx]++;
        if (freq[idx] == 1) count++; 

        while (count == 3) {
            minLen = min(minLen, right - left + 1);

            int leftIdx = s[left] - '0';
            freq[leftIdx]--;
            if (freq[leftIdx] == 0) count--; 
            left++;
        }
    }
    return (minLen == INT_MAX) ? -1 : minLen;
    }
};


/*
Time Complexity: O(n)
Auxiliary Space: O(1) as  vector<int> freq(3, 0); - small fixed size, no extra space
*/