// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"

// Output: true

// Example 2:

// Input: s = "rat", t = "car"

// Output: false

 
#include <string>
#include <unordered_map>    

using namespace std;
    

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i =0 ;i<s.size();i++){
            mp1[s[i]-'a']++;
            mp2[t[i]-'a']++;
        }
        for(int i =0 ;i<25;i++){
            if(mp1[i]!=mp2[i])return false;
        }
        return true ;

    }
};