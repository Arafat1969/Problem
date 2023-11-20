// A phrase is a palindrome if, after converting all uppercase letters into
// lowercase letters and removing all non-alphanumeric characters, 
// it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.
#include<bits\stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int l=0, r=s.length()-1;
        while(l<r){
            while(!isalnum(s[l]) && l<r){l++;}
            while(!isalnum(s[r]) && l<r){r--;}
            if(tolower(s[l])!=tolower(s[r]))return false;
            l++;r--;
        }
        return true;
    }
    bool alphanum(char s){
        return (int('A')<=int(s)<=int('Z')) || (int('a')<=int(s)<=int('z'))||
        (int('0')<=int(s)<=int('9'));
    }
};