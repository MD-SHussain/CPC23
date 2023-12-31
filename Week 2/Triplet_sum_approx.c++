#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &A, int B) {
    int diff=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-2;i++)
    {
        int l=i+1;
        int r=A.size()-1;
        while(l<r)
        {
            
            if(A[i]+A[l]+A[r]==B)
            return A[i]+A[l]+A[r];
            
            else if(A[i]+A[l]+A[r]<B)
            {
                if(B-(A[i]+A[l]+A[r])<diff)
                diff=B-(A[i]+A[l]+A[r]);
                
                l++;
            }
            
            
            else if(A[i]+A[l]+A[r]>B)
            {
                if((A[i]+A[l]+A[r])-B<diff)
                diff=(A[i]+A[l]+A[r])-B;
                
                r--;
            }
            
        }
        
    }
    
    return B-diff;

}

int main() 
{ 
	int n,target;
    cout<<"Enter the no. of elements in A and target sum: ";
    cin>>n>>target;
    vector<int> A(n);
    cout<<endl<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    cout<<"The closest sum to "<<target<<" is : "<<threeSumClosest(A,target);
	

	return 0; 
}
