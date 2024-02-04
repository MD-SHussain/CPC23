#include<bits/stdc++.h>
using namespace std;

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
    int l=0,r=n-1;
    int ans=-1;

    while(l<=r) {
        mid=l+(r-l)/2;
        if(ar[mid]>ar[mid+1] && ar[mid]>ar[mid-1])
        {
            ans=mid;
            break;
        }
        else if(ar[mid]>ar[mid+1])
            r=mid-1;
        else {
            l=mid+1;
        }
    }

    if(ans==-1)
    ans=ar[n-1];

    cout<<ans<<endl;

    return 0;
}
