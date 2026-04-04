class Solution {
  public:
    vector<string> graycode(int n) {
        // code here
        vector<string> res;
        
        for (int i = 0; i < (1 << n); i++){
        int grayCode = i ^ (i >> 1);

        string str = "";
        for (int j = n - 1; j >= 0; j--) {
            if (grayCode & (1 << j))
                str += '1';
            else
                str += '0';
        }

        res.push_back(str);
    }

    return res;
    }
};

/*
 gray code formula - i ^ (i >> 1) (XOR & right shift operator)
 1 << n means 2^n, we can also write pow(2, n)
 left shift 1 by n → equals 2^n 
 
 Time Complexity: O(2^n)
Auxiliary Space: O(2^n)
*/