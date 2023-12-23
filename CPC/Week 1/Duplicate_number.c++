#include<bits/stdc++.h> 
using namespace std; 

int duplicate(vector<int>& A) 
{
    for(int i=0;i<A.size();i++)
    {
        if(A[abs(A[i])]<0)
            return abs(A[i]);

        A[abs(A[i])]*=-1;
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
   
   int res=duplicate(A);
   
   if(res==-1) cout<<"No duplicates";
   else cout<<"Duplicate element is : "<<res;

    return 0;
} 
