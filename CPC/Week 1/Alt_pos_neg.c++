#include<bits/stdc++.h>
using namespace std;

void rearrange(vector<int>& A)
{
    int j=-1;
  for(int i=0;i<A.size();i++)
  {
    if(A[i]<0) 
    {
        j++;
        swap(A[i],A[j]); 
    }
    
  }
  int i=j+1;
   j=0;
  while (i<A.size() && A[j]<0 && i>j) {
    swap(A[i],A[j]);
    i++;
    j=j+2;
  }

}
int main() {
  
    int n;
    cout<<"Enter the no. of elements in A : ";
    cin>>n;
    vector<int> A(n);
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    rearrange(A);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
