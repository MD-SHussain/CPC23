#include <bits/stdc++.h>
using namespace std;

class TimeMap {
private:
    unordered_map<string,vector<pair<int,string>>> mp;
public:
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)==mp.end()) 
        return "";
        if(mp[key][0].first >timestamp) 
        return "";
        string ans="";
        int l=0,r=mp[key].size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(mp[key][mid].first==timestamp) 
            return mp[key][mid].second;
            else if(mp[key][mid].first<timestamp){
                ans=mp[key][mid].second;
                l=mid+1;
            } else r=mid-1;
        }
        return ans;
    }
};