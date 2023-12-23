#include<bits/stdc++.h>
using namespace std;

void missing_repeating(vector<int>& A)
{
    int X,Y;
	for (int i=0;i<A.size();i++)
    {
		if (A[abs(A[i])-1]>0)
			A[abs(A[i])-1]=-A[abs(A[i])-1];
		else
			X=abs(A[i]);
	}

	for (int i=0;i<A.size();i++)
    {
		if (A[i]>0)
			Y=i+1;
	}

    cout << "The Repeating & Missing no.s are: "<<X<<Y;
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
   
    missing_repeating(A);

    return 0;
}
