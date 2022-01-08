// https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1#

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long ans=(N*(N+1)*(2*N+1))/6;
        return ans;
    }
};

