#include<bits/stdc++.h>
using namespace std;

int equilibrium(vector<int>& A)
{
    int n=A.size();
    vector<int> presum_l(n);
    vector<int> presum_r(n);
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        presum_l[i]=sum;     
    }

    int sum=0;

    for(int i=n-1;i>=0;i++)
    {
        sum+=A[i];
        presum_r[i]=sum;     
    }

    for (int i=0;i<n;i++)
    {
        if(presum_l[i]==presum_r[i])
            return i;
    }
    return -1;
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

    cout<<"Equilbrium index is : "<<equilibrium(A)<<endl;

    
	

	return 0; 
}



