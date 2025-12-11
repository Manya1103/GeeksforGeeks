class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
      long long n= arr.size();
       long long aSum = (n*(n+1))/2;
        long long aSumSq = (n*(n+1)*(2*n+1))/6;
        long long obSum= 0;
        long long obSumSq= 0;
        for (int i = 0; i<n; i++){
            obSum= obSum + arr[i];
            obSumSq= obSumSq + (1LL * arr[i]*arr[i]);
        }
    long long s1 = aSum - obSum;
       long long s2 = aSumSq - obSumSq;
        s2 = s2/s1;
        long long m =(s1 + s2 )/2;
        long long d = s2 - m ;
        return { (int)d, (int)m };
        // int s1 = aSum - obSum = m-d // (missing - duplicate)
        // int s2 = aSumSq - obSumSq; = m^2 - d^2 = (m+d)(m-d)
        // (m+d)= s2/(m-d) = s2/s1
        // s2 = s2/s1 //update the value of s2
        // s2 = m+d and s1 = m-d 
        // on solving these two equations
        // m =(s1 + s2 )/2 & d = s2 - m 
        
    }
};