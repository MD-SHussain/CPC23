#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
       int pre_sum[nums.size()];
      int count=0, sum=0;
      unordered_map<int,int> map;
       for(int i=0;i<nums.size();i++)
       {
         sum+=nums[i];
         pre_sum[i]=sum;
       }

       for(int i=0;i<nums.size();i++)
       {
           if(pre_sum[i]==k)
           count++;

           if(map.find(pre_sum[i]-k)!=map.end())
           {
               count+=map[pre_sum[i]-k];
           }

           map[pre_sum[i]]++;
       }


       return count;
        
    }

int main() 
{ 
	int n,target;
    cout<<"Enter the no. of elements in A and target : ";
    cin>>n>>target;
    vector<int> A(n);
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    cout<<"No. of subarrays are: "<<subarraySum(A,target)<<endl;

    
	

	return 0; 
}

