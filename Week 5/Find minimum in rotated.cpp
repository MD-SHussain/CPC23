class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        int l=0;
        int r=nums.size()-1;
        int pivot=-1,mid;
        int ans;
        
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(l==r)
            {
                pivot=l;
                break;
            }
            
            if(mid<r && nums[mid]>nums[mid+1])
            {
                pivot=mid;
                break;
            }
            if(mid>l && nums[mid]<nums[mid-1])
            {
                pivot=mid-1;
                break;
            }
            
            if(nums[l]>=nums[mid])
            {
                r=mid-1;
            }
            if(nums[l]<nums[mid])
            {
                l=mid+1;
            }  
        }
        
        if(pivot==-1 || pivot==n-1) ans=nums[0];
        else if(pivot!=-1)
        {
            ans=min(nums[pivot+1],nums[0]);
        }
        
        return ans;
        
    }
};