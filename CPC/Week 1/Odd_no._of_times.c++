#include <bits/stdc++.h>
using namespace std;

int OddFreq(vector<int>& A)
{
	unordered_map<int, int> map;
    for(int i=0;i<A.size();i++)
	{
		map[A[i]]++;
	}

	for(auto i:map)
	{
		if(i.second%2!=0)
		{
			return i.first;
		}
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
    int ans=OddFreq(A);
    if(ans==-1) cout<<"No no. with odd frequency found."<<endl;
    else cout<<"No. with odd freqwncy is: "<<ans<<endl;

    return 0;
}
