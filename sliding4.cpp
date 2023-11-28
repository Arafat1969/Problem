#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        vector<int> count(26,0);
        if(n>m){
            return false;
        }
        for(int i=0;i<n;i++){
            count[s1[i]-'a']++;
            count[s2[i]-'a']--;
        }
        if(checkCount(count)){
            return true;
        }
        for(int i=n;i<m;i++){
            count[s2[i]-'a']--;
            count[s2[i-n]-'a']++;
            if(checkCount(count)){
                return true;
            }
        }
        return false;
    }

    bool checkCount(vector<int> & count){
        for(int a: count){
            if(a!=0){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution solve;
    cout<<solve.checkInclusion("adc","dcda");
}