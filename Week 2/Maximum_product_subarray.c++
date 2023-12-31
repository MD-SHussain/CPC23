#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int> &A)
{
    int n=A.size();
    int pre=1, suff=1;
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(pre==0) pre=1;
        if (suff==0) suff=1;
        pre*=A[i];
        suff*=A[n-i-1];
        ans = max(ans,max(pre,suff));
    }
    return ans;
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

    int ans=maxProductSubArray(A);
    cout<<ans<<" "; 
  
	return 0; 
}
