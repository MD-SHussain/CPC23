#include <bits/stdc++.h>
using namespace std;

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
    int search(vector<int>& nums, int target) {
        
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
        
        if(pivot==-1) ans=bs(nums,target,0,nums.size()-1);
        else if(nums[pivot]==target) ans=pivot;
        else if(nums[0]<=target) ans=bs(nums,target,0,pivot-1);
        else ans=bs(nums,target,pivot+1,nums.size()-1);
        
        return ans;
            
        
    }
};