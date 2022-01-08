// 1. Two Sum
// Easy

// 27852

// 893

// Add to List

// Share
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.
 

// Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> mp;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
                return {i, mp[target-nums[i]]};
            else
                mp[nums[i]] = i;
        }
        
        return {-1,-1};
        
        // vector<int> ans;
        // int i=0,j=1;
        // while(i < nums.size())
        // {
        //     if(j==nums.size())
        //     {
        //         i++;
        //         j=i+1;
        //     }
        //     if (nums[i]+nums[j] == target)
        //     {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //     }
        //     else
        //         j++;    
        // }
              
        // int i,j;
        // for(i = 0; i < nums.size(); i++)
        //     for(j = i+1; j < nums.size(); j++)
        //         if(nums[i]+nums[j]==target)
        //         {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //         }
                    
        
        // return ans;
    }
};