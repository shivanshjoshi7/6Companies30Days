// https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/#

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>> v;
        
        int size=string_list.size();
        if(size==0)
            return v;
        
        map<map<char,int>,vector<string>> m;
        for(int i=0; i<size; i++)
        {
            map<char,int> mp;
            string s=string_list[i];
            
            for(int j=0; j<s.length(); j++)
            {
                mp[s[j]]++;
            }
            m[mp].push_back(s);
        }
        for(auto it=m.begin(); it!=m.end(); ++it)
        {
            v.push_back(it->second);
        }
        return v;   
    }
};
