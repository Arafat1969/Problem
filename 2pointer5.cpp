#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int max_l=height[0],max_r=height[height.size()-1],l=0,r=height.size()-1;
        int area=0;
        while(l<r){
            if(max_l<=max_r){
                if((max_l-height[l])>=0){
                    area+=(max_l-height[l]);
                }
                max_l=max(max_l,height[l]);
            }else{
                if((max_r-height[r])>=0){
                    area+=(max_r-height[r]);
                }
                max_r=max(max_r,height[r]);
            }

            if(max_l<= max_r){
                l++;
            }else{
                r--;
            }
        }
        return area;
    }
};

int main(){
    Solution solve;
    vector<int> h={4,2,0,3,2,5};
    cout<<solve.trap(h);
}