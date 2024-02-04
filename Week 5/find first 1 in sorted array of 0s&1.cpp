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
    if(ar[0]==1)
    {
    cout<<"First 1 occurs at 0th index"<<endl;
    return 0;
    }

    int l=0,r=1,mid;
    while(ar[r]!=1)
    {
      l=r;
      r+=r;
	}

    while(l<=r) {
        mid=l+(r-l)/2;
        if(ar[mid]==1 && ar[mid-1]== 0)
			break;
        else if(arr[mid]==1)
            r=mid-1;
        else {
            l=mid+1;
        }
    }

    cout<<"First 1 occurs at "<<mid<<" index"<<endl;

    return 0;
}
