// User function Template for C++
class Solution {
  public:
    bool searchPattern(string& txt, string& pat) {
        // your code here

        int n = txt.length();
        int m = pat.length();
   
   // naive approach
        for(int i = 0; i < n - m + 1; i++){
            int j;
            for(j = 0; j < m; j++){
             if(txt[i + j] != pat[j]){
               break;
             }
        } 
         if(j == m) return true;
        }
        return false;
        
    }
};

/*
Time Complexity: O(N2)
Auxiliary Space: O(1)

Complexity Analysis of Naive algorithm for Pattern Searching:
Best Case: O(n)
When the pattern is found at the very beginning of the text (or very early on).
The algorithm will perform a constant number of comparisons, typically on the order of O(n) comparisons, where n is the length of the pattern.
Worst Case: O(n2)
When the pattern doesn't appear in the text at all or appears only at the very end.
The algorithm will perform O((n-m+1)*m) comparisons, where n is the length of the text and m is the length of the pattern.
In the worst case, for each position in the text, the algorithm may need to compare the entire pattern against the text.

*/