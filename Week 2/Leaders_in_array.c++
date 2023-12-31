#include<bits/stdc++.h>
using namespace std;
vector<int> Leaders(vector<int> A)
{
    int n=A.size();
	int right_max=INT_MIN;
    vector<int> ans;


	for (int i=n-1;i>=0;i--)
    {
		if (right_max<A[i])
        {
			right_max=A[i];
			ans.push_back(right_max);
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
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    vector<int> ans=Leaders(A);

    for(auto i: ans)
    {
        cout<<i<<" ";
    }
    
	return 0; 
}