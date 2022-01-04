// https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1#

class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        int ans=K+M%N-1;
        ans%=N;
        if(ans==0)
            return N;
        else return ans;
    }
};

