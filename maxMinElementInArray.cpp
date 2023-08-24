#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) {
    long long mini=INT_MAX;
    long long maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i] > maxi)
        {
            maxi=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]< mini)
        {
            mini=a[i];
        }
    }
    
    pair<long long , long long>ans;
    ans.first=mini;
    ans.second=maxi;
    return ans;
}
