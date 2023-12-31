#include<bits/stdc++.h>
using namespace std;

int Triplet_sum(vector<int> A,int sum)
{
	for (int i=0;i<A.size()-2;i++)
    {
		unordered_set<int> set;
		int pair_sum=sum -A[i];
		for (int j=i+1;j<A.size();j++)
        {
			int diff=pair_sum-A[j];
			if (set.find(diff)!=set.end())
				return 1;
	
			set.insert(A[j]);
		}
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

    Triplet_sum(A,target)? cout<<"Triplet exists"<<endl : cout<<"Triplet doesn't exist"<<endl;
	

	return 0; 
}
