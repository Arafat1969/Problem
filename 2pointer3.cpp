#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size()<3){
            return result;
        }
        sort(nums.begin(),nums.end());
        int l,r;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]>0){
                break;
            }
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            l=i+1;r=nums.size()-1;
            while(l<r){
                int sum= nums[i]+nums[l]+nums[r];
                if(sum>0){
                    r--;
                }else if(sum<0){
                    l++;
                }else{
                    result.push_back({nums[i], nums[l], nums[r]});
                    while(l<r && nums[l]==nums[l+1]){
                        l++;
                    }
                    l++;
                    while (l<r && nums[r]==nums[r-1]){
                        r--;
                    }
                    
                }         
            }
            
        }
        return result;
    }
};

int main(){
    Solution solve;
    vector<int> a={-1,0,1,2,-1,-4};
    vector<vector<int>> result=solve.threeSum(a);
    cout<<result[0][1];
}