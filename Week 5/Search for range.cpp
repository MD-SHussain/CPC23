class Solution {
public:
    int bs(vector<int>& nums, int target,int l,int r)
    {
        if(l<=r)
        {
            
        int mid=(l+r)/2;
        if(nums[mid]==target)
            return mid;
        if(nums[mid]<=target)
        return bs(nums,target,mid+1,r);
        else
        return bs(nums,target,l,mid-1);
        }
        
        return -1;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==1 && nums[0]==target) return {0,0};
        if(nums.size()==1 && nums[0]!=target) return {-1,-1};
        int ans=bs(nums,target,0,nums.size()-1);
        int l,r;
        l=ans;
        r=ans;
        if(ans==-1)
            return {-1,-1};
        else
        {
            while(l>0)
            {
                if(nums[l-1]!=target) break;
                l--;
            }
            
            while(r<nums.size()-1)
            {
            if(nums[r+1]!=target) break;
                r++;
            }
        }
        
        return {l,r};
            
        
    }
};