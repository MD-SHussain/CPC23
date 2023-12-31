#include<bits/stdc++.h>
using namespace std;

int checkall9s(vector<int> &A, int n )
{
	for(int i=0;i<n;i++)
	{
        if (A[i] != 9) return 0;
    }
			
	return 1;
}

void nextPalindrome(vector<int> &A, int n )
{
	int mid=n/2;
	bool leftsmaller = false;
	int i = mid - 1;
	int j = (n % 2) ? mid + 1 : mid;
	while (i >= 0 && A[i] == A[j])
		i--, j++;
	if (i < 0 || A[i] < A[j])
		leftsmaller = true;

	while (i >= 0)
	{
		A[j] = A[i];
		j++;
		i--;
	}
	if (leftsmaller == true)
	{
		int carry = 1;
		i = mid - 1;
    if (n % 2 == 1)
    {
        A[mid] += carry;
        carry = A[mid] / 10;
        A[mid] %= 10;
        j = mid + 1;
    }
    else
        j = mid;

    while (i >= 0)
    {
        A[i] += carry;
        carry = A[i] / 10;
        A[i] %= 10;
        A[j++] = A[i--]; 
    }
	}
}

int main()
{
	int n;
    cout<<"Enter the no. of digits: ";
    cin>>n;
    vector<int> A(n);
    cout<<endl<<"Enter the digits in array format : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    cout<<endl<<"Next palindrome is:";
	if (checkall9s(A, n))
	{
		cout<<"1";
		for(int i=1;i<n;i++)
			printf("0");
			
		cout<<"1";
	}
	else
	{
		nextPalindrome(A,n);

        for(int i=0;i<n;i++)
        {
            cout<<A[i]<<endl;
        }
	}
	return 0;
}


