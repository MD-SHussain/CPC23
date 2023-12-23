#include<bits/stdc++.h>
using namespace std; 
int titleToNumber(string columnTitle)
{
    int n=columnTitle.length();
    long long  col_num=0;
    for(int i=n-1;i>=0;i--)
    {
        int x=int(columnTitle[n-i-1]);
        x=x-64;
        long long p=pow(26,i);
        col_num+=p*x;
    }
        return col_num;
        
}

int main()
{
    string s;
    cout<<"Enter the column name : ";
    cin>>s;
   
    int column_number=titleToNumber(s);
    cout<<column_number;

    return 0;
}

    