class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        int n = s.length();
         unordered_map<char,int> mp = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };
        int result = 0;
        for(int i = 0; i < n; i++){
        // if the current value is less than the next value, 
        // subtract current from next and add to result
            if(i + 1 < n && mp[s[i]] < mp[s[i + 1]]){ // i+1 must be less than n
                result += mp[s[i + 1]] - mp[s[i]];
                i++; // skip next
            } else {
            result += mp[s[i]]; // add
            }
        }
        return result;
    }
};

/*
Time Complexity: O(n)
Auxiliary Space: O(1)
*/