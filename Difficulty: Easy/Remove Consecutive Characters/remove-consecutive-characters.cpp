class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        string str = "";
        for(int i = 0; i < s.length(); i++){
             if(str.empty() || str.back() != s[i]) {
                str.push_back(s[i]);
            }
        }
        return str;
        
    }
};