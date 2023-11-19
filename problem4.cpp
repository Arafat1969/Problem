#include<bits\stdc++.h>
using namespace std;
// Given an array of strings strs, group the anagrams together.
// You can return the answer in any order.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
// typically using all the original letters exactly once.
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> group;
        for(auto x: strs){
           string word=x;
           sort(word.begin(),word.end());
           group[word].push_back(x);
        }
        vector<vector<string>> res;
        for(auto it=group.begin();it!=group.end();it++){
            res.push_back(it->second);
        }
        return res;
    }
};

//wrong on testcase 117
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string,vector<string>> group;
//         for(int i=0;i<strs.size();i++){
//             string k= getK(strs[i]);
//             group[k].push_back(strs[i]);
//         }
//         vector<vector<string>> res;
//         for(auto it=group.begin();it!=group.end();it++){
//             res.push_back(it->second);
//         }
        
//         return res;
//     }
//     string getK(string s){
//         vector<int> key(26,0);
//         for(int i;i<s.length();i++){
//             key[s[i]-'a']++;
//         }
//         string key1;
//         for(int j=0;j<26;j++){
//             key1=key1+to_string(key[j]);
//         }
//         return key1;
//     }  
// };