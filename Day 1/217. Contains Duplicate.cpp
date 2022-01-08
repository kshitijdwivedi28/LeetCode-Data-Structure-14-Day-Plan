// 217. Contains Duplicate
// Easy

// 3348

// 910

// Add to List

// Share
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

// Example 1:

// Input: nums = [1,2,3,1]
// Output: true
// Example 2:

// Input: nums = [1,2,3,4]
// Output: false
// Example 3:

// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true
 

// Constraints:

// 1 <= nums.length <= 105
// -109 <= nums[i] <= 109
// Accepted
// 1,209,050
// Submissions
// 2,022,884
  
  
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
//         map<int,int> mp;
        
//         for(auto value : nums)
//             mp[value]++;
        
//         for(auto value : mp)
//             if (value.second > 1)
//                 return true;
        
//         return false;
        
        // CAN ALSO USE SETS
        
        set<int> s(nums.begin(), nums.end());
        
        return s.size() < nums.size();
    }
};
  
