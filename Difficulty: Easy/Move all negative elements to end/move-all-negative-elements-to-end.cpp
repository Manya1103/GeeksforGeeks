class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        vector<int> temp(n);   // temporary array of same size
        // vector<int> temp;
        // int j=0;
        int idx=0;
        for (int i=0; i<n; i++){
            if (arr[i]>=0){
                // swap(arr[i],arr[j]); // didn't use swap because it changes the original order of numbers which must remain the same.
                // j++;
                temp[idx] = arr[i];
                idx++;
                //  temp.push_back(arr[i]);
            }
        }
        for (int i=0; i<n; i++){
            if (arr[i]<0){;
                temp[idx] = arr[i];
                idx++;
                //  temp.push_back(arr[i]);
            }
        }
        for (int i=0; i<n; i++){
             arr[i] = temp[i];
        }

    }
};
// push_back is a function of vector which is used to insert elements at the end of a vector one by one, without disturbing their original order.
