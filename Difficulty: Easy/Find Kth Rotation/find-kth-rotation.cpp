class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int k=min_element(arr.begin(),arr.end())-arr.begin();
        return k;
        // time complexity - O(n)
        // space complexity - O(1)
    }
};
