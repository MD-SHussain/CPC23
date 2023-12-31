#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_price=prices[0];
        int profit=0;
        for(int i=0;i<n;i++)
        {
            profit=max(profit,prices[i]-min_price);
            min_price=min(min_price,prices[i]);
        }
        return profit;
        
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








