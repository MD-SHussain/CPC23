#include<bits/stdc++.h>
using namespace std;

void split(vector<int>& A)
{
	int l=0;
    int r=A.size()-1;

	while(l<=r)
    {
		if(A[l]%2!=0) 
		{
			if (A[r]%2==0) 
			{
				swap(A[l],A[r]);
				l++;
				r--;
			}
			else
				r--;
		}
		else
			l++;
	}
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
   
   split(A);
   for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
} 
