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

//approach 1
//Blind-75 No.242
// 1. the goal is to find if the string t is an anagram of s.
// 2. step-1 is to check the size t,s s.size(), t.size() is not equal then immediately 
// 3. use two maps to store the frequency of each strings t and s 
// 4. since the contraints that s and t are lowercase alphabet we substract it ASCII characters 'a'
// 5. we iterate again both hashmaps check frequency if different return false