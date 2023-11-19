#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set1(nums.begin(),nums.end());
        int longest=0;
        for(auto n:nums){
            if(set1.count(n-1)){
                continue;
            }else{
                int length=1;
                while(set1.count(n+length)){
                    length++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    }
};
