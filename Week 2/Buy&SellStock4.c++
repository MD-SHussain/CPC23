#include<bits/stdc++.h>
using namespace std;

int fn(int i,int buy,int cap,vector<int>& prices,vector<vector<vector<int>>>& dp)
{
    if(i==prices.size() || cap==0)
    return 0;
    if(dp[i][buy][cap] != -1)
    return dp[i][buy][cap];
    int profit;
    if(buy)
    {
        int bought=-prices[i]+fn(i+1,0,cap,prices,dp);
        int ignored=fn(i+1,1,cap,prices,dp);
        profit=max(bought,ignored);
        dp[i][buy][cap]=profit;
    }
    else
    {
        int sold=prices[i]+fn(i+1,1,cap-1,prices,dp);
        int ignored=fn(i+1,0,cap,prices,dp);
        profit=max(sold,ignored);
       dp[i][buy][cap]=profit;
    }
    return dp[i][buy][cap];
}
    int maxProfit(int k,vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return fn(0,1,k,prices,dp);
        
    }


int main() 
{ 
	int n,k;
    cout<<"Enter the no. of stocks and maxium transactions allowed: ";
    cin>>n,k;
    vector<int> A(n);
    cout<<endl<<"Enter the prices : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    int ans=maxProfit(k,A);
    cout<<ans;
	

	return 0; 
}








