#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximum =1;
        int l=0,r=height.size()-1;
        while(l<r){
            int area=min(height[l],height[r])*(r-l);
            maximum=max(area,maximum);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return maximum;
    }
};

int main(){
    Solution solve;
    vector<int> a={1,1};
    int c= solve.maxArea(a);
    cout<<c;
}