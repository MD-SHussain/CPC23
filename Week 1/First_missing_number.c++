#include<bits/stdc++.h>
using namespace std;


int firstMissing(vector<int>& A) {
    int i=0, n=A.size();
    while(i<n)
    {
        if(A[i]>0 && A[i]<=n && A[A[i] - 1] != A[i]) 
         swap(A[i], A[A[i]-1]);
        else 
         i++;
    }
        for(i =0;i<n;i++){
            if(A[i] != (i+1))
                return i+1;
        }
        return n+1;
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
   
    cout<<firstMissing(A);

    return 0;
}