class Solution {
  public:
    string countAndSay(int n) {
        // code here
        if(n == 1){
            return "1";
        }
        
        string s = countAndSay(n - 1);
        string result = "";
        for(int i = 0; i < s.length(); i++){
            int count = 1;
            char ch = s[i];
             while (i < s.length() - 1 && ch == s[i + 1]) {
                count++;
                i++;
                
            }
            
            result += to_string(count) + string(1, ch);
        }
        
        
        return result;

    }
};