#include<bits/stdc++.h>
using namespace std;


void increasingTriplet(vector<int>& nums) {
        if(nums.size()<3)
        cout<<"No triplet";
        int min1, min2;
        min1=INT_MAX;
        min2=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]<=min1)
           min1=nums[i];
           else if(nums[i]<=min2)
           min2=nums[i];
           else
           {
            cout<<min1<<" "<<min2<<" "<<nums[i];
           }
        }
        
        cout<<"No triplet";
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

    increasingTriplet(A);
	

	return 0; 
}


