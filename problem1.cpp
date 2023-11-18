#include<bits/stdc++.h>
using namespace std;
//Given an integer array nums, return true if any value appears
// at least twice in the array, and return false if every element is distinct.
// Example 1:
// Input: nums = [1,2,3,1]
// Output: true
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[j]){
                return true;
            }
            j++;
        }
        return false;
    }
};



