#include<bits/stdc++.h>
using namespace std;

void setones(vector<vector<int>>& matrix) {
    bool flag1,flag2;
    flag1=flag2=false;

    for(int i=0;i<matrix.size();i++)
    {
        if(matrix[i][0]==1)
        flag1=true;
    }
        
    for(int i=0;i<matrix[0].size();i++)
    {
        if(matrix[0][i]==1)
        flag2=true;
    }    

    for(int i=1;i<matrix.size();i++)
    {
        for(int j=1;j<matrix[0].size();j++)
        {
            if(matrix[i][j]==1)
            {
                matrix[i][0]=1;
                matrix[0][j]=1;
            }
        }

    }

    for(int i=1;i<matrix.size();i++)
    {
        for(int j=1;j<matrix[0].size();j++)
        {
            if(matrix[i][0]==1 || matrix[0][j]==1)
            {
                matrix[i][j]=1;
            }
        }
    }

        if(flag1==true)
        {
            for(int i=0;i<matrix.size();i++)
            {
            matrix[i][0]=1;
            }
        }

        if(flag2==true)
        {
            for(int i=0;i<matrix[0].size();i++)
            {
            matrix[0][i]=1;
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

    setones(A);
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
    }
	

	return 0; 
}



    

    
