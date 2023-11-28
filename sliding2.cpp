#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int res=0;
        set<char> ss;
        for(int r=0;r<s.length();r++){//2
            while(ss.count(s[r])==1){
                ss.erase(s[l]);
                l++;//1
            }
            ss.insert(s[r]);
            res=max(res,r-l+1);
        }
        return res;
    }
};

int main(){
    Solution solve;
    string a="ynyo";
    cout<<solve.lengthOfLongestSubstring(a);
}