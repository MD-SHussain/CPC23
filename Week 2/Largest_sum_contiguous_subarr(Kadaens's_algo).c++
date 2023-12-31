#include<bits/stdc++.h>
using namespace std;

vector<int> maxSubAaySum(vector<int> A) 
{
    int n=A.size();
    int start;
    int A_start;
    int A_end;
    int maxi=INT_MIN;
    int sum=0;
    vector<int> ans;

    for (int i=0;i<n;i++) 
    {
        if(sum==0)
        start=i;

        sum+=A[i];

        if(sum>maxi)
        {
            maxi=sum;
            A_start=start;
            A_end=i;
        }

        if(sum<0) sum=0;
    }

    for(int i=A_start;i<=A_end;i++)
    {
        ans.push_back(A[i]);
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

    int sum=0;

    vector<int> ans=maxSubAaySum(A);
    for(int i=0;i<ans.size();i++)  
    {
        cout<<ans[i]<<" "; 
        sum+=ans[i];
    }

    cout<<endl<<" Sum is : "<<sum;

	return 0; 
}
