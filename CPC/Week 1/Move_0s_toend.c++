#include<bits/stdc++.h> 
using namespace std; 

void movezeroes(vector<int>& A)
{
    int j=0; 
	for(int i=0;i<A.size();i++)
    { 
		if (A[i]!=0) { 
			swap(A[j],A[i]);
			j++; 
		} 
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

    movezeroes(A);
    for(int i=0;i<A.size();i++)
    { 
		cout<<A[i]<<" ";
	} 
	

	return 0; 
}
