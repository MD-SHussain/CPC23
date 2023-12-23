#include<bits/stdc++.h>
using namespace std; 

bool isPalindrome(int x) {
      if(x<0)
      return 0;
       long long int temp=x;
      long long int sum=0;
        while(x!=0)
        {
            long long int rem;
            rem=x%10;
            sum = (sum*10)+rem;
            x=x/10;
        }
        if(sum==temp)
        return 1;
        return 0;
        
    }

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
   
   if(isPalindrome(n))
   cout<<"Yes"<<endl;
   else
   cout<<"No";

    return 0;
}

