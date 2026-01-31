class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        int n = s.size();
        unordered_map<int, int>map;
        string ans;
        
        for(int i = 0; i < n; i++){
            map[s[i]]++;
            if(map[s[i]] > 1){
                ans.push_back(s[i]);
                return ans;
            // return s[i];
                break;
            }
        }
        return "-1";
    }
};