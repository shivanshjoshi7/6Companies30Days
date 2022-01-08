// https://practice.geeksforgeeks.org/problems/decode-the-string2444/1#

class Solution{
    string decode(string &s, int &i)
    {
        string ans="";
        while(i<s.length() && s[i]!=']')
        {
            if(isdigit(s[i]))
            {
                int k=0;
                while(isdigit(s[i]))
                {
                    k=k*10+s[i++]-'0';
                }
                i++;
                string str=decode(s,i);
                while(k--)
                {
                    ans+=str;
                }
                i++;
            }
            else
            {
                ans+=s[i++];
            }
        }
        return ans;
    }
public:
    string decodedString(string s){
        // code here
        int i=0;
        string ans=decode(s,i);
        return ans;
    }
};