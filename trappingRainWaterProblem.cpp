#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool find3Numbers(int A[], int n, int X)
    {
        
        sort(A ,A+n);
	    //bool ans;
	    for(int i=0;i<n;i+=2)
	    {
		    for(int j=i+1;j<n;j+=2)
		    {
			    for(int k=j+1;k<n;k+=2)
			    {
				    if(A[i]+A[j]+A[k]==X && i!=j && j!=k && i!=j)
				    {
	                    return 1;
				    }
				}
			}
		}
		return 0
		
	}
	
    

};
