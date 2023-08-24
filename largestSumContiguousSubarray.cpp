#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    
    long long maxSubarraySum(int arr[], int n){
        
        long long int sum=0;
        long long int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>maxi)
            {
                maxi=sum;
            }
            if(sum < 0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};
