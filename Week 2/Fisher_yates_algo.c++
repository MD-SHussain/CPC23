#include<bits/stdc++.h>
using namespace std;

vector<int> fisherYates(vector<int>& A) 
{
    int n=A.size();
    for (int i=n-1;i>0;i--) 
    { 
        int j=rand()%(i+1); 
         swap(A[i],A[j]); 
    } 
    return A;
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

    vector<int> res=fisherYates(A);
    for(int i=0;i<n;i++)  
		cout<<res[i]<< " "; 

	return 0; 
}








