#include<bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int>& A)
{
	int n= A.size()+ 1;
	int sum=(n)*(n+1)/2;
    int sum_arr=0;
	for (int i=0;i<A.size();i++)
		sum_arr+= A[i];
	return sum-sum_arr;
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
   
    cout<<MissingNumber(A);

    return 0;
}
