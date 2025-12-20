class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        int n = s1.length(); //equal lengths
        string str = s1 + s1;
        
            if (str.find(s2) != string::npos){
                return true;
            }
        else{ 
            return false;
        }
    }
};