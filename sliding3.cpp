#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int res=0;
        unordered_map <char,int> map;
        for(int r=0;r<s.length();r++){
            map[s[r]]++;
            // cout<<map[s[r]]<<" ";
            // cout<<find_max(map)<<endl;
            while(((r-l+1)-find_max(map))>k){
                map[s[l]]--;
                l++;
            }
            res=max(r-l+1,res);
        }
        return res;
    }
    int find_max(unordered_map<char,int> &map){
        int maxf=0;
        for(auto a:map){
            maxf=max(maxf,a.second);
        }
        return maxf;
    }
};

int main(){
    Solution solve;
    string a="ABAB";
    cout<<solve.characterReplacement(a,2);
}