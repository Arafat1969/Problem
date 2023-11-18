#include<bits/stdc++.h>
using namespace std;

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
//  typically using all the original letters exactly once.

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};

// Solution 2
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> s1;
        unordered_map<char,int> t1;
        for(int i=0;i<s.length();i++){
            s1[s[i]]++;
            t1[t[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(s1[s[i]]!=t1[s[i]]){
                return false;
            }
        }
        return true;
    }
};