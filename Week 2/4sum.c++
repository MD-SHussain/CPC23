#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums,int target) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        int i,j,k,l;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                k=j+1;
                l=nums.size()-1;
                while(k<l)
                {
                    long long int sum =nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target){
                    s.insert({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    l--;
                    }
                    if(sum<target)
                    k++;
                    if(sum>target)
                    l--;
                }
            }
        }

         for(auto i : s)
        {
            ans.push_back(i);
        }

        return ans;
        
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

    vector<vector<int>> res=fourSum(A,target);

    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
	

	return 0; 
}

