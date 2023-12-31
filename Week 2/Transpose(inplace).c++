#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>& matrix) {
        int i,j;
        for(i=0;i<matrix.size();i++)
        {
            for(j=i;j<matrix.size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }

int main() 
{ 
	int m,n;
    cout<<"Enter the size of matrix : ";
    cin>>m>>n;
    vector<vector<int>> A;
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
        
    }

    transpose(A);
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
    }
	

	return 0; 
}



    

    

    
