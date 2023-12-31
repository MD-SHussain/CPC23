#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k)
{
    int n=nums.size();
    k=k%nums.size();

    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k+1,nums.end());
    reverse(nums.begin(),nums.end());  

}


int main() 
{ 
	int n,k;
    cout<<"Enter the no. of elements in A and no. of rotations: ";
    cin>>n>>k;
    vector<int> A(n);
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    rotate(A,k);

    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
	

	return 0; 
}


    
