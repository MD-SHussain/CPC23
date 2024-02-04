#include<bits/stdc++.h>
using namespace std;



void merge(vector<int> ar1,  vector<int> ar2,int m,int n)
{
    int i=n,j=0,k=0;

    while (i<m && j<n){
       if (ar1[i]<=ar2[j]) {
            ar1[k]=ar1[i];
            k++;
            i++;
        }
        else {
            ar1[k]=ar2[j];
            k++;
            j++;
        }
    }

    while (i<m) {
        ar1[k]=ar1[i];
        k++;
        i++;
    }

    while (j<n) {
        ar1[k]=ar2[j];
        k++;
        j++;
    }
}


int main()
{
    int m,n;
    vector<int> ar1(m,-1);
    vector<int> ar2;

    
    cout<<"Enter Number of elements for array 1: ";
    cin>>m;
    for (int i=0;i<m;i++) {;
        cin>>ar1[i];
    }

    cout<<"Enter Number of elements for array 2: ";
    cin>>n;

    for (int j= 0;j<n;j++) {
        cin>>ar2[j];
    }

   
    int j=m-1;
    for (int i=m-1;i>=0;i--)
        if (ar1[i]!=-1) {
            ar1[j]=ar1[i];
            j--;
        }

    merge(ar1,ar2,m,n);

    for (int i=0;i<m;i++)
        cout<<ar1[i]<<" ";

    
    return 0;
}
