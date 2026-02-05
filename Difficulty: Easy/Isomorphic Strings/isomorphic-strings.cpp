class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        int n = s1.size();
        unordered_map<char,char>mp;
        unordered_set<char>st;
        for(int i = 0; i < n; i++){
            if(!mp.empty() && mp.find(s1[i])!=mp.end()){
                if(mp[s1[i]]!=s2[i]){
                    return false;
                }
            }
            else{
                if(st.find(s2[i])!=st.end()) return false;
                mp[s1[i]]=s2[i];
                st.insert(s2[i]);
            }
        }
        return true;
    }
};
 