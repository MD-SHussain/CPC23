#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
       long long int ans,l,r,mid;
        l=0;
        r=x;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(mid*mid==x)
            {
                ans=mid;
                break;
            }
                
            if(mid*mid>x)
            {
                r=mid-1;  
            }
            else
            {
                l=mid+1;
                ans=mid;
            }
        }
        return ans;
        
    }
};