#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of elements  ";
    cin>>n;
    vector<int> ar1(n);
    vector<int> ar2(n);
    for (int i=0;i<n;i++) {;
        cin>>ar1[i];
    }

    for (int j= 0;j<n;j++) {
        cin>>ar2[j];
    }

    int i=0;
	int j=n-1;
	while(i<=n-1 && j>=0 && ar1[i]>ar2[j])
    {
        swap(ar1[i], ar2[j]);
        i++;
        j--;
    }
	sort(ar1.begin(),ar1.end());
	sort(ar2.begin(),ar2.end());

    int ans= (ar1[n-1]+ar2[0])/2;
	cout<<ans;
    return 0;
}
