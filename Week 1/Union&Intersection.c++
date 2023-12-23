#include <bits/stdc++.h>
using namespace std;

void Union(vector<int>& A, vector<int>& B)
{
	int i = 0, j = 0;
	while (i < A.size() && j < B.size())
	{
		if (A[i] < B[j])
		{
			cout << A[i] << " ";
            i++;
            while (i< A.size() && A[i-1]==A[i])
            {
                i++;
            }
		}
		else if (A[i] > B[j])
		{
			cout << B[j] << " ";
			j++;
            while (j< B.size() && B[j-1]==B[j])
            {
                j++;
            }
		}
		else
		{
			cout << A[i] << " ";
            i++;
            j++;
            while (i< A.size() && A[i-1]==A[i])
            {
                i++;
            }
            while (j< B.size() && B[j-1]==B[j])
            {
                j++;
            } 
		}
	}
	while (i < A.size())
	{
		cout << A[i] << " ";
		i++;
        while (i< A.size() && A[i-1]==A[i])
        {
            i++;
        } 
	}
	while (j < B.size())
	{
		cout << B[j] << " ";
        j++;
		while (j< B.size() && B[j-1]==B[j])
            {
                j++;
            }
	}
}

void Intersection(vector<int>& A, vector<int>& B)
{
    int i = 0, j = 0;
    while (i < A.size() && j < B.size()) {
        if (i > 0 && A[i] == A[i-1])
        {
            i++;
            continue;
        }
        if (A[i]<B[j]) i++;
        else if (B[j]<A[i]) j++;
        else
        {
            cout << A[i] <<" ";
            i++; j++;
        }
    }
}

int main()
{
    int n,m;
    cout<<"Enter the no. of elements in A and B"<<endl;
    cin>>n>>m;
    vector<int> A(n),B(m);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>B[i];
    }

	Union(A, B);
    Intersection(A,B);
    return 0;
}
