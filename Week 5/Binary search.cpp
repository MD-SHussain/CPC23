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
       return bs(nums,target,0,nums.size()-1);
        
    }
};