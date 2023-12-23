#include <bits/stdc++.h>
using namespace std;

void repeating_elements(vector<int>& A) 
{
    int n=A.size();

    int c1=0;
    int c2=0;
    int n1=INT_MIN;
    int n2=INT_MIN;

    for (int i=0;i<n;i++) {
        if (c1==0 && n2!=A[i]) {
            c1=1;
            n1=A[i];
        }
        else if (c2==0 && n1!=A[i]) {
            c2=1;
            n2=A[i];
        }
        else if (A[i]==n1) c1++;
        else if (A[i]==n2) c2++;
        else {
            c1--;
            c2--;
        }
    }

    c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == n1) c1++;
        if (A[i] == n2) c2++;
    }

    int mini = int(n / 3) + 1;
    if (c1 >= mini) cout<<n1<<endl;
    if (c2 >= mini) cout<<n2<<endl;
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
   
    repeating_elements(A);

    return 0;
}
