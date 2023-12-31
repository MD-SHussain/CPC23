#include<bits/stdc++.h>
using namespace std;


int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        int max_sum=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]<=nums[i-1])
            sum=0;

            sum+=nums[i];

            if(sum>max_sum)
            {
                max_sum=sum;
            }
            cout<<sum<<" "<<max_sum<<endl;
        }
        
        return max_sum;
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

    int ans=maxAscendingSum(A);
    cout<<ans;
	

	return 0; 
}




