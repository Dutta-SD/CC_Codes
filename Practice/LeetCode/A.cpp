# include <bits/stdc++.h>
using namespace std;

bool comp (const vector<vector<int>>& a, const vector<vector<int>>& b){
        // a < b then true
        if (a[0] < b[0]) return true;
        return a[1] < b[1];        
    }

class Solution {
public:      
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), comp);
        
        stack <vector<int>> s;
        vector<vector<int>> v;
        
        
        int n = intervals.size();
        
        s.push(intervals[0]);
        
        for(int i = 1; i < n; ++i){
            auto t = s.top();
            if(t[1] >= intervals[i][0]){
                s.pop();
                s.push({t[0], intervals[i][1]});
            } else {
                s.push(intervals[i]);
            }            
        }
        
        while(!s.empty()){
            auto t = s.top();
            s.pop();
            v.push_back(t);
        }
        
        return v;        
    }
};