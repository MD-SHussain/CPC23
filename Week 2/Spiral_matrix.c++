
#include<bits/stdc++.h>
using namespace std;

vector<int> spiralmatrix(vector<vector<int>>& A)
{
	int m = A.size();
    int n = A[0].size();
	vector<int> ans;
	vector<vector<bool>> visited(m,vector<bool>(n,false));
	vector<int> dr={0,1,0,-1};
	vector<int> dc={1,0,-1,0};

	int x=0,y=0,di=0;
	for (int i=0;i<m*n;i++) 
    {
		ans.push_back(A[x][y]);
		visited[x][y]=true;
		int newX=x+dr[di];
		int newY=y+dc[di];

		if (0<=newX && newX<m && 0<=newY && newY<n && !visited[newX][newY])
        {
			x=newX;
			y=newY;
		}
		else {
			di=(di + 1)%4;
			x+=dr[di];
			y+=dc[di];
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

    vector<int> ans=spiralmatrix(A);
    for(int i=0;i<m*n;i++)
    {
        cout<<ans[i]<<"->";
    }
	

	return 0; 
}



