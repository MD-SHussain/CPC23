#include<bits/stdc++.h> 
using namespace std; 

void array_reverse(vector<int>& A, int l, int r) 
{ 
	while (l<r) 
	{ 
		int t=A[l]; 
		A[l]=A[r]; 
		A[r]=t; 
		l++; 
		r--; 
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
   
   array_reverse(A,0,n-1);
   for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
} 
