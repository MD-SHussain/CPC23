#include<bits/stdc++.h>
using namespace std;

void odd(vector<int>& A) 
{ 
	int xor2 = A[0];
	int set_bit; 
	int n = A.size() - 2; 

	for(int i=1; i<A.size();i++) 
		xor2=xor2^A[i]; 

	set_bit=xor2&~(xor2-1); 
   
    int x=0;
    int y=0;
	for(int i=0;i<A.size();i++) 
	{ 

		if(A[i]&set_bit) 
		x=x^A[i]; 
		else
		y=y^A[i]; 
	} 

	cout << "The elements with odd occurences are :"<<x<<" "<<y; 
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
   
    odd(A);

    return 0;
}
