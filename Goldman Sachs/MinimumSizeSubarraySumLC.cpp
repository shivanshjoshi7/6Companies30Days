class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        int sum=0,len=n+1;
        int st=0;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                int curr_len=i-st+1;
                len=min(len,curr_len);
                sum-=nums[st++];
            }
            
        }
        if(len==n+1)
            return 0;
        else
            return len;
    }
};