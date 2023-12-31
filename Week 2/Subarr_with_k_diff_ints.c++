#include<bits/stdc++.h>
using namespace std;

int atmostk(vector<int>& nums,int k)
{
    int n=nums.size();
        int start=0;
        int c=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            while(mp.size()>k && start<=i)
            {
                mp[nums[start]]--;
                if(mp[nums[start]]==0) mp.erase(nums[start]);
                start++;
            }

            c+=i-start+1;
        }

        return c;
}

int subarraysWithKDistinct(vector<int>& nums, int k)
{
    return atmostk(nums,k)-atmostk(nums,k-1);  
}


int main() 
{ 
	int n,k;
    cout<<"Enter the no. of elements in A and value of k: ";
    cin>>n,k;
    vector<int> A(n);
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    int ans=subarraysWithKDistinct(A,k);
    cout<<ans;
	
	return 0; 
}








