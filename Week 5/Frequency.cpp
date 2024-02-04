#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,target;
    cout<<"Enter Number of elements and number to cal freq: ";
    cin>>n,target;
    vector<int> ar1(n);
    for (int i=0;i<n;i++) {;
        cin>>ar1[i];
    }
    int first=-1,last=-1;
    int l=0;
    int r=n-1;
    while(l<=r) {
        int mid=l+(r-l)/2;
        if(target<nums[mid])
          r=mid-1;
        else if(target>nums[mid])
            l=mid+1;
        else {
            first=mid;
            r=mid-1;
        }
    }
    while(l<=r) {
        int mid=l+(r-l)/2;
        if(target<nums[mid])
          r=mid-1;
        else if(target>nums[mid])
            l=mid+1;
        else {
            last=mid;
            l=mid+1;
        }
    }

    int ans=last-first+1;
    if(first==-1 || last==-1)
    cout<"element not found"
    else
	cout<<ans;
    return 0;
}
