// https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/#

class Solution{
    ull getmin(ull x,ull y,ull z)
    {
        ull min=x;
        if(y<min)
            min=y;
        if(z<min)
            min=z;
        
        return min;
    }
    
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    
	    vector<ull> v;
	    v.push_back(1);
	    
	    int u2=0,u3=0,u5=0;
	    
	    
	    
	    for(int i=1; i<n; i++)
	    {
	        ull x=v[u2]*2;
	        ull y=v[u3]*3;
	        ull z=v[u5]*5;
	        
	        ull min=getmin(x,y,z);
	        
	        if(min==x)
	            u2++;
	        if(min==y)
	            u3++;
	        if(min==z)
	            u5++;
	       
	        v.push_back(min);
	    }
	    return v[n-1];
	}
};

