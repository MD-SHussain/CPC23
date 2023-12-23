#include <bits/stdc++.h>
using namespace std;
void RepeatingElements(vector<int>& A)
{
    int n=A.size();
    int S = n*(n+1)/2;
    int F=1;
    for(int i=1;i<=n;i++)
    {
        F=F*i;
    }
    
    int S_arr=0;
    int F_arr=1;
    for (int i=0;i<n;i++)
    {
        S_arr+= A[i];
        F_arr*= A[i];
    }
        int sum_of_rep = S_arr - S;
        int product_of_rep = F_arr/F;
        int diff_of_rep = sqrt(sum_of_rep*sum_of_rep - 4*product_of_rep);
    
    int a,b;
        a=(sum_of_rep + diff_of_rep)/2;
        b=sum_of_rep - a;

        cout<<"Repeating Elements are: "<<a<<" "<<b;

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
    RepeatingElements(A);

    return 0;
}
