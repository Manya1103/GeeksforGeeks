class Solution {
  public:
    vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
        // code here.
        int n = a.size();
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        
        int i = 0, j = 0, k = 0;
        int minDiff = INT_MAX, maxSum = INT_MAX;
        vector<int> ans;
        while (i < n && j < n && k < n) {
            int mini = min({a[i], b[j], c[k]});
            int maxi = max({a[i], b[j], c[k]});
            int diff = maxi - mini;
            int sum = a[i] + b[j] + c[k];
            
            if (diff < minDiff || (diff == minDiff && sum < maxSum)) {
                minDiff = diff, maxSum = sum;
                ans = {a[i], b[j], c[k]};
            }

            if (mini == a[i]) i++;
            else if (mini == b[j]) j++;
            else k++;
        }
        
        sort(ans.begin(), ans.end(), greater<int>());
        return ans;
        
    }
};


