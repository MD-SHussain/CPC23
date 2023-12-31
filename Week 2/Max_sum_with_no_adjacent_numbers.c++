#include<bits/stdc++.h>
using namespace std;

int fn(vector<int>& A,int i,vector<int>& dp)
{
	if (i>=A.size())
		return 0;
	if (dp[i]!=-1)
		return dp[i];
    dp[i]= max(fn(A,i+1,dp), A[i]+fn(A,i+2,dp));

    return dp[i];
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
    vector<int> dp(n+1,-1);

	cout<<fn(A,0,dp);
	return 0;
}
