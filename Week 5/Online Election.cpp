#include <bits/stdc++.h>
using namespace std;

class TopVotedCandidate {
public:

    vector<int> P,time;

    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        time=times;
        unordered_map<int,int> mp;
        int  maxv=0,lead=0; 
        for(int i=0;i<persons.size();i++){
            mp[persons[i]]++;
            if(mp[persons[i]]>=maxv) 
                {
                maxv=mp[persons[i]];
                lead=persons[i];
                }
            P.push_back(lead);
        }
    }
    
    int q(int t) {
        auto index=upper_bound(time.begin(),time.end(),t)-time.begin();
        return P[index-1];
    }
};