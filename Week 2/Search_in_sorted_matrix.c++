#include<bits/stdc++.h>
using namespace std;


void search(vector<vector<int>> A,int x)
{
    int n=A.size();
    int i=0, j=n-1;
    while (i < n && j >= 0) {
        if (A[i][j]==x) {
            cout<<"Element found at "<<i<<" "<<j;
        }
        if (A[i][j]>x)
            j--;
 
        else
            i++;
    }
 
    cout<<"Element not found";
}


int main() 
{ 
	int n,x;
    cout<<"Enter the size of matrix : ";
    cin>>n;
    vector<vector<int>> A;
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
        
    }
    cout<<"Enter the element to be searched : ";
    cin>>x;


    search(A,x);
	

	return 0; 
}



    


