class Solution {
public:
    int bs(vector<char>& letters, char target,int l,int r)
    {
        if(l<=r)
        {
            
        int mid=l+(r-l)/2;
        cout<<letters[mid]<<endl;
        if(letters[mid]<=target)
        return bs(letters,target,mid+1,r);
        else
        return bs(letters,target,l,mid-1);
        }
        return l;
    }
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        if(target<letters[0]|| target>=letters[n-1])
        return letters[0];
        int ans= bs(letters,target,0,n-1);
        return letters[ans];
        
    }
};