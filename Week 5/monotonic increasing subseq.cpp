#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of elements : ";
    cin>>n,target;
    vector<int> ar(n),seq;
    for (int i=0;i<n;i++) {;
        cin>>ar[i];
    }
	seq.push_back(ar[0]);
	for (int i=1;i<n;i++) {
		if (ar[i]>seq.back()) 
			seq.push_back(ar[i]);
		else {

			int l=lower_bound(seq.begin(),seq.end(),ar[i])-seq.begin();
            seq[l]=ar[i];
		}
	}
     
	cout<<seq.size();
    return 0;
}

