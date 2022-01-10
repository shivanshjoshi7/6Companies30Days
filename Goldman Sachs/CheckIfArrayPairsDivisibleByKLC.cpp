class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> map;
        for(int i=0; i<arr.size(); i++)
        {
            map[(arr[i]%k+k)%k]++;
        }
        unordered_map<int,int> :: iterator it;
        if(k%2==0 && map[k/2]%2==1)
            return false;
        
        bool ans;
        for(it=map.begin(); it!=map.end(); it++)
        {
            int t=it->first;
            if(t!=0 && map[t]!=map[k-t])
                return false;
        }
        if(map[0]%2==1) 
            return false;
        
        return true;
    }
};