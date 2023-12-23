#include<bits/stdc++.h>
using namespace std;

 void nonrepeating(vector<int>& A){
        int x = A[0];
        for (int i=1;i<A.size();i++) {
            x^= A[i];
        }
        int right_most_set_bit = x&~(x-1);

        int a=0,b=0;
        for (int i=0;i<A.size();i++) {
            int x=A[i];
            if((x&right_most_set_bit)!=0)
                a^=x;
            else
                b^=x;
        }
        cout<<"Non Repeating Elements are: "<<a<<b;
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
   
    nonrepeating(A);

    return 0;
}

    

