class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        int n = s.length();
        // using stack
        stack<char> st; 
        for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }  else if (c == ')' || c == '}' || c == ']') {
            if (st.empty()) return false; 
            
            char top = st.top();
            
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
            
            st.pop(); // Pop matching opening bracket
       
        }
        
        }
        return st.empty(); 
    }
};