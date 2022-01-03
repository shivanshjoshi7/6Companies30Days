// https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#

string encode(string s)
{     
  //Your code here
  int l=s.length();
  int ptr1=0,ptr2=0;
  int c=0;
  string ans="";
  while(ptr2!=l)
  {
      c++;
      ans+=s[ptr2++];
      
      while(ptr2!=l && s[ptr2]==s[ptr2-1])
      {
          c++;
          ptr2++;
          
      }

      ans+=c+'0';
      c=0;
  }
  
  return ans;
  
}     
 
