// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Example 1:

// Input: nums = [1,2,3,1]

// Output: true

// Explanation:

// The element 1 occurs at the indices 0 and 3.

// Example 2:

// Input: nums = [1,2,3,4]

// Output: false

// Explanation:

// All elements are distinct.


#include <vector>
#include <unordered_map>
using namespace std;    

class Solution {
public:     
    bool containsDuplicate(vector<int> & nums){
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
            if(map.find(nums[i])!=map.end()){
                return true;
            }
        }
        return false;
    }

};