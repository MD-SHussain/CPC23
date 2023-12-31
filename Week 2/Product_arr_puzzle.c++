#include<bits/stdc++.h>
using namespace std;

vector<int> productpuzzle(vector<int> A) 
{ 
    int n=A.size();
	int arr_prod=1; 

	vector<int> prod(n,1);
	for(int i=0;i<n;i++) 
    { 
		prod[i]=arr_prod; 
		arr_prod*= A[i]; 
	} 

	arr_prod=1; 

	for(int i=n-1;i>=0;i--) 
    { 
		prod[i]*=arr_prod; 
		arr_prod*= A[i]; 
	} 

    return prod;
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

    vector<int> prod=productpuzzle(A);
    for(int i=0;i<n;i++)  
		cout<<prod[i]<< " "; 

	return 0; 
}






