
#include<bits/stdc++.h>
using namespace std;

int bs(vector<int> v,int l,int r) 
{ 
    if (l<=r) { 

        int mid=l+(r-l)/2; 
        if (mid==v[mid]) 
            return mid; 
        
        else if (mid<=v[r] && bs(v,mid+1,r)!=-1) 
            return bs(v,mid+1,r); 
        else if (mid-1>=v[l]) 
            return bs(v,l,mid-1); 
    } 
    return -1; 
}

int main()
{
    int n;
    cout<<"Enter the no. of elements in array  : ";
    cin>>n;
    vector<int> ar(n);
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<bs(ar,0,n-1);

    return 0;
}