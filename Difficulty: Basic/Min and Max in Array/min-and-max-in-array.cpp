class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
      int n = arr.size();

  int minVal = arr[0];
    int maxVal = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < minVal)
            minVal = arr[i];
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }

    return {minVal, maxVal};

    };
};