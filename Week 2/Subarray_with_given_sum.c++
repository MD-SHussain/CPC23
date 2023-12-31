#include<bits/stdc++.h>
using namespace std;


void subArraySum(vector<int> A,int sum)
{
    int n=A.size();
	int curr_sum=A[0], start=0;

	for (int i=1;i<=n;i++)
    {
		while (curr_sum > sum && start < i - 1) {
			curr_sum = curr_sum - A[start];
			start++;
		}

		if (curr_sum==sum)
			cout <<" Subarray is between "<<start<<" and "<<i-1;
		

		if (i < n)
			curr_sum = curr_sum + A[i];
	}

	cout << "No subAay found";
}

int main() 
{ 
	int n,target;
    cout<<"Enter the no. of elements in A and target : ";
    cin>>n>>target;
    vector<int> A(n);
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }


	return 0; 
}

