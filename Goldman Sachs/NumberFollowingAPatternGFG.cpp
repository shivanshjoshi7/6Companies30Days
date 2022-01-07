// https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1/#

class Solution{   
    
public:
    string printMinNumberForPattern(string S){
        // code here 
        int n=S.length();
        string ans="";
        stack<int> s;
        int d=0;
        for(int i=0; i<n; i++)
        {
            s.push(++d);
            if(S[i]=='I')
            {
                while(!s.empty())
                {
                    ans+=s.top()+'0';
                    s.pop();
                }
            }
            
        }
        s.push(++d);
        while(!s.empty())
        {
            ans+=s.top()+'0';
            s.pop();
        }
        return ans;
    }
};

