#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int l=0,r=numbers.size()-1;
        while(l<r){
            if(numbers[l]+numbers[r]==target){
                result.push_back(l+1);
                result.push_back(r+1);
                return result;
            }
            while((target-numbers[l])<numbers[r]){
                r--;
            }
            while((target-numbers[r])>numbers[l]){
                l++;
            }
        }
    }
};

int main(){
    Solution solve;
    vector<int> a;
    a={1,3,5,6,7,8,9,10,15,17};
    int t=19;
    vector<int> result= solve.twoSum(a,t);
    for (int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
}