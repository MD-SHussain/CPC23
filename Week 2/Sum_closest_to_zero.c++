#include<bits/stdc++.h>
using namespace std;

vector<int> closestSum(vector<int> A) 
{		 
    int n=A.size();
	int diff=INT_MAX; 
    int sum=0;

	int l=0;
    int r=n-1; 
 
	int e1=l;
    int e2=n-1; 
	
    sort(A.begin(),A.end()); 
	
	while(l<r) 
	{ 
		sum=A[l]+A[r]; 
		if(abs(sum)<abs(diff)) 
		{ 
			diff=sum; 
			e1=l; 
			e2=r; 
		} 
		if(sum<0) l++; 
		else r--; 
	} 

    return {A[e1],A[e2]} ;
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

    vector<int> res=closestSum(A);
    cout<<res[0]<<" "<<res[1];
	

	return 0; 
}


