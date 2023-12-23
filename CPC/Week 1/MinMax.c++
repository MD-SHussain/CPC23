#include<bits/stdc++.h>
using namespace std;

void MinMax(vector<int>& A, int n)
{
    int max,min;
    int i;
    if (n%2!=0)
    {
        max=A[0];
        min=A[0];
        i=1;
    }
    else
    {
        if (A[0]<A[1])
        {
            max=A[1];
            min=A[0];
        }
        else
        {
            max=A[0];
            min=A[1];
        }
        i=2;
    }
    while (i<n)
    {
        if (A[i]<A[i+1])
        {
            if (A[i]<min)
                min=A[i];
            if (A[i+1]>max)
                max=A[i+1];
        }
        else
        {
            if (A[i]>max)
                max=A[i];
            if (A[i+1]<min)
                min=A[i+1]; 
        }
        i=i+2;
    }
    
    cout<<"Max element is: "<<max<<" and Min element is : "<<min;
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
   
    MinMax(A,n);

    return 0;
}
