class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        // Time complexity: O(l1+l2)
        int l1=str1.length();  //O(1)
        int l2=str2.length();  //O(1)
        
        if(str1+str2==str2+str1)  //O(l1+l2) for concatenation
        {
            return str1.substr(0,__gcd(l1,l2));  // gcd takes O(log n) where n is upper limit of l1 and l2, substr takes O(min(l1,l2))                                                     is max of l1 and l2, substr                                                     takes min(l1,l2) time in                                                       worst case
        }
        else
            return "";
    }
};