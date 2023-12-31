#include<bits/stdc++.h>
using namespace std;

int pair_sum(vector<int>& A,int target)
{
	unordered_set<int> set;
	for(int i=0;i<A.size();i++){
		int diff=target-A[i];
        if (set.find(diff)!=set.end())
			return 1;

		set.insert(A[i]);
	}
	return 0;
}

int main() 
{ 
	int n,target;
    cout<<"Enter the no. of elements in A and target sum: ";
    cin>>n>>target;
    vector<int> A(n);
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    pair_sum(A,target)? cout<<"Pair exists"<<endl : cout<<"Pair doesn't exist"<<endl;
	

	return 0; 
}
