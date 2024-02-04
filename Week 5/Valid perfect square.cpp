class Solution {
public:

    bool isPerfectSquare(int num) {
        long long int l=1;
        long long int r=num;
       long long int mid,ans=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            long long int temp=mid*mid;
            if(temp==num)
            {
                ans=mid;
                break;
            }
            if(temp>num)
            {
                r=mid-1;
            }
            else
                l=mid+1;
        }
        
        if(ans==-1)
            return false;
        return true;
    }
};