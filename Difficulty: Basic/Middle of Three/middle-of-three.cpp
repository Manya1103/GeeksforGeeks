// User function template for C++

class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        if(a > b && b > c || a < b && b < c) return b;
        else if(b > a && a > c || b < a && a < c) return a;
        else if(a > c && c > b || a < c && c < b) return c;
    }
};