#include<bits/stdc++.h>
using namespace std;

int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int start=0;
        int count=0;
        int prod=1;
        for(int i=0;i<n;i++)
        {
            prod*=nums[i];

            while(prod>=k && start<=i)
            {
                start++;
                prod=prod/nums[start-1];
            }

            count+=i-start+1;
        }

        return count;
        
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

    int ans=numSubarrayProductLessThanK(A,k);
    cout<<ans;
	

	return 0; 
}








