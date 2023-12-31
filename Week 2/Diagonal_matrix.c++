#include<bits/stdc++.h> 
using namespace std; 

vector<vector<int>> diagonal_matrix(vector<vector<int>> A)
{  
    int m=A.size();
    int n=A[0].size();
	vector<vector<int>> ans(n+m-1); 

	for(int i=0;i<m;i++) 
	{ 
		for(int j=0;j<n;j++) 
		{ 
			ans[i+j].push_back(A[j][i]); 
		} 
	} 
   
    return ans;
	
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

    vector<vector<int>> ans=diagonal_matrix(A);
    
    for(int i=0;i<ans.size();i++) 
	{ 
		for(int j=0;j<ans[i].size();j++) 
			cout<<ans[i][j]<<" "; 

		cout<<endl; 
	} 
	

	return 0; 
}