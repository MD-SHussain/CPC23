#include<bits/stdc++.h>
using namespace std;

int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2!=0)
            nums[i]=1;
            else
            nums[i]=0;
        }

        int sum=0;
        int c=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum==k)
            c++;
            if(mp.find(sum-k)!=mp.end())
            {
                c+=mp[sum-k];
            }
            mp[sum]++;
        }

        return c;
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

    int ans=numberOfSubarrays(A,k);
    cout<<ans;
	

	return 0; 
}






