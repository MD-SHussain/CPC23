
#include<bits/stdc++.h>
using namespace std;

bool majority(vector<int> v,int target)
{
    int n;
    int index=-1;
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(v[mid]==target)
        {
            index=mid;
            break;
        }
        else if(v[mid]>target)
        r=mid-1;
        else
        l=mid+1;
    }
 
    if (index==-1)
        return false;

    if((index+n/2<n) && v[index+n/2]==target)
        return true;
    else
        return false;
}

int main()
{
    int n,check;
    cout<<"Enter the no. of elements in array and no. to be cheked : ";
    cin>>n>>check;
    vector<int> ar(n);
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
   
    majority(ar,check)?cout<<"majority element" :cout<<"ille";

    return 0;
}