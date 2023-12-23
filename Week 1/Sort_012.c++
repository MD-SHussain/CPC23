#include <bits/stdc++.h>
using namespace std;

void sort_012(vector<int>& A) {

    int left=0;
    int mid=0;
    int right=A.size()-1;
    while (mid<=right) 
    {
        if (A[mid]==0) 
        {
            swap(A[left],A[mid]);
            left++;
            mid++;
        }
        else if(A[mid]==1)
        {
            mid++;
        }
        else {
            swap(A[mid],A[right]);
            right--;
        }
    }
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
   
   sort_012(A);
   for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
} 

