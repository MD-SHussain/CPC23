#include<bits/stdc++.h>
using namespace std;


vector<int> rowAndmax_cntmumOnes(vector<vector<int>>& mat) {
        int r=0, max_cnt=0,cnt=0;
        for(int i=0;i<mat.size();i++) 
        {
             cnt=0;
            for(int j=0;j<mat[0].size();j++)  
              {
                if(mat[i][j]==1)  
                  cnt++;
              }

            if(cnt>max_cnt){
                max_cnt=cnt;
                r=i;
            }
        }
        return {r,max_cnt};
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

    vector<int> ans=rowAndmax_cntmumOnes(A);
    cout<<" Row and no. of 1s: ";
    cout<<ans[0]<<" "<<ans[1]<<endl;
	

	return 0; 
}



    
