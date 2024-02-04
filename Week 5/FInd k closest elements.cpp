class Solution {
public:
    int bs(vector<int>& nums, int target,int l,int r)
    {
        if(l<=r)
        {
            
        int mid=(l+r)/2;
        if(nums[mid]<=target)
        return bs(nums,target,mid+1,r);
        else
        return bs(nums,target,l,mid-1);
        }
        
        return l;
        
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int index=bs(arr,x,0,n-1);
        cout<<index;
        int l=index-1;
        int r=index;
       while(k>0)
       {
           if(l>=0 && r<=n-1)
           {
               if(abs(arr[l]-x)<=abs(arr[r]-x))
                   l--;
               else
                   r++;
           }
           else if(l>=0)
               l--;
           else if(r<=n-1)
               r++;
           
           k--;
       }
        
        vector<int> ans;
        for(int i=l+1;i<=r-1;i++)
        {
            ans.push_back(arr[i]);
        }
        
        return ans;
    }
};