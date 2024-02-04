#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int guessNumber(int n) {
      long long  int l=1;
      long long  int r=n;
       long long int mid,ans;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(guess(mid)==0)
            {
                ans=mid;
                break;
            }
            
            else if(guess(mid)==-1)
            {
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return ans;
        
    }
};