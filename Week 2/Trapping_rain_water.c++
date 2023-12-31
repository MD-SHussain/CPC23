#include<bits/stdc++.h>
using namespace std;


int trap(vector<int>& height) {

        int n=height.size();
        int l=0;
        int r=n-1;
        int lmax=INT_MIN;
        int rmax=INT_MIN;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            lmax=max(lmax,height[l]);
            rmax=max(rmax,height[r]);

            if(lmax<rmax)
            {
                ans+=lmax-height[l];
                l++;
            }
            else
            {
                ans+=rmax-height[r];
                r--;
            }
        }
        return ans;
    }


int main() 
{ 
	int n;
    cout<<"Enter the no. of elements in A : ";
    cin>>n;
    vector<int> A(n);
    cout<<endl<<"Enter the heights : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    int ans=trap(A);
    cout<<ans;
	

	return 0; 
}






