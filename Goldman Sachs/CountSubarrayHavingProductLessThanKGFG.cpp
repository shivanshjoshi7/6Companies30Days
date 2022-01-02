// https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int start=0,end=0;
        int count=0;
        long long p=1;
        while(end!=n)
        {
            p*=a[end];
            while(p>=k && start<=end)
            {
                p/=a[start];
                start++;
            }
            
            count+=(end-start+1);
            end++;
        }
        return count;
    }
};

