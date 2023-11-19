// Given an integer array nums, return an array answer such that answer[i] is 
// equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix=1,postfix=1;
        vector<int> output(nums.size());
        for(int i=0;i<nums.size();i++){
            output[i]=prefix;
            prefix=prefix*nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            output[i]*=postfix;
            postfix=postfix*nums[i];
        }
        return output;
    }
};