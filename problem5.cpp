#include<bits/stdc++.h>
using namespace std;
// Given an integer array nums and an integer k, return the k most frequent elements.
// You may return the answer in any order.
// Example 1:
// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]

//solve1
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto i: nums){
            m[i]++;
        }
        return sort_map(m,k);
    }
    bool static cmp(pair<int,int> &a,pair<int,int>& b){
        return a.second>b.second;
    }
    vector<int> sort_map(unordered_map<int,int> & m,int k){
        vector<pair<int,int>> pair;
        for(auto& i : m){
            pair.push_back(i);
        }
        sort(pair.begin(),pair.end(),cmp);
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(pair[i].first);
        }
        return res;
    }

    
};


//solve 2
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto i: nums){
            mp[i]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto i:mp){
            bucket[i.second].push_back(i.first);
        }
        vector<int> result;
        for(int i=nums.size();i>=0;i--){
            if(result.size()>=k){
                break;
            }
            if(!bucket[i].empty()){
                result.insert(result.end(),bucket[i].begin(),bucket[i].end());
            }
        }  
        return result;
    }

    
};