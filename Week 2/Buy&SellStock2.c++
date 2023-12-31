#include<bits/stdc++.h>
using namespace std;

int fn(int i,int buy,vector<int>& prices,vector<vector<int>>& dp)
{
    if(i==prices.size())
    return 0;
    if(dp[i][buy]!=-1)
    return dp[i][buy];
    int profit;
    if(buy)
    {
        int bought=-prices[i]+fn(i+1,0,prices,dp);
        int ignored=fn(i+1,1,prices,dp);
        profit=max(bought,ignored);
        dp[i][buy]=profit;
    }
    else
    {
        int sold=prices[i]+fn(i+1,1,prices,dp);
        int ignored=fn(i+1,0,prices,dp);
        profit=max(sold,ignored);
        dp[i][buy]=profit;
    }
    return dp[i][buy];
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return fn(0,1,prices,dp);
        
    }


int main() 
{ 
	int n;
    cout<<"Enter the no. of stocks: ";
    cin>>n;
    vector<int> A(n);
    cout<<endl<<"Enter the prices : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    int ans=maxProfit(A);
    cout<<ans;
	

	return 0; 
}








