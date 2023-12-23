#include<bits/stdc++.h>
using namespace std; 

string convertToTitle(int columnNumber) {
        string ans="";
        int i=0;
        while(columnNumber>0)
        {
            int x=columnNumber%26;
            if(x==0)
            {
                x=26;
                columnNumber-=1;
            }
            ans+=char(x+64);
            cout<<char(x+64)<<" ";
            columnNumber=(columnNumber/26);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

int main()
{
    int n;
    cout<<"Enter the column number : ";
    cin>>n;
   
    string column_name=convertToTitle(n);
    cout<<column_name;

    return 0;
}

    
