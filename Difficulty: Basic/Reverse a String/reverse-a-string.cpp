// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        //  reverse(s.begin(), s.end());
    // return s;
    // int i;
    int n = s.length();
    int j= n-1;
    for(int i=0; i<j; i++){
             swap(s[i], s[j]);
        j--;    }
    return s;
    
    } ;
};
