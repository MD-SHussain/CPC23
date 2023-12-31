#include<bits/stdc++.h>
using namespace std;

static bool comp(pair<int,int>a,pair<int,int>b)
{
    if(a.second!=b.second)
     return a.second<b.second;

    return a.first<b.first;
}

vector<int> frequencySort(vector<int>& nums) 
{
    vector<pair<int,int>> v;
    vector<int> ans;
    unordered_map<int,int> m;
    for(int i=0;i<nums.size();i++)
        m[nums[i]]++;
        
    for(auto it:m)
    v.push_back({it.first,it.second});

    stable_sort(v.begin(),v.end(),comp);
       
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].second;j++)
        {
            ans.push_back(v[i].first);
        }
    }
        return ans;
        
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

    vector<int> res=frequencySort(A);
    for(int i=0;i<n;i++)  
		cout<<res[i]<< " "; 

	return 0; 
}









    