#include<bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& nums) {
    int sum=0, maxLen=0;
    unordered_map<int,int> mp{{0, -1}};
        
    for(int i=0; i<nums.size(); i++)
    {
        sum += nums[i]==1 ? 1 : -1;
        if(sum==0)
        {
            maxLen=i+1;
        }
        if(mp.count(sum)) maxLen = max(maxLen, i-mp[sum]);
        else mp[sum] = i;
    }
        return maxLen;
    }

int main() 
{ 
	int n;
    cout<<"Enter the no. of elements in A : ";
    cin>>n;
    vector<int> A(n);
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    int ans=findMaxLength(A);
    cout<<ans<<" "; 
  
	return 0; 
}
