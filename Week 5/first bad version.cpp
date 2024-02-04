#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstBadVersion(int n) {
        long long int l=1;
        long long int r=n;
        long long int mid,ans;
        
        while(l<=r)
        {
            mid=(l+r)/2;
            if(isBadVersion(mid)==false && isBadVersion(mid+1)==true)
            {
                ans=mid+1;
                break;
            }
            if(isBadVersion(mid)==true && isBadVersion(mid-1)==false)
            {
                ans=mid;
                break;
            }
            if(isBadVersion(mid))
            {
                r=mid-1;
            }
            if(isBadVersion(mid)==false)
            {
                l=mid+1;
            }
        }
        
        return ans;
    }
};