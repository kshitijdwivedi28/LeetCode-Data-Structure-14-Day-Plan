// 350. Intersection of Two Arrays II
// Easy

// 3653

// 622

// Add to List

// Share
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]
// Explanation: [9,4] is also accepted.
 

// Constraints:

// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 1000
 

// Follow up:

// What if the given array is already sorted? How would you optimize your algorithm?
// What if nums1's size is small compared to nums2's size? Which algorithm is better?
// What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        // No extra memory used
        // O(nlogn)
        // Two pointers
        
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());
        
//         int i1 = 0, i2 = 0;
//         vector<int> ans;
        
//         while( i1 < nums1.size() && i2 < nums2.size())
//         {
//             if (nums1[i1] == nums2[i2])
//             {
//                 ans.emplace_back(nums1[i1]); 
//                 i1++; i2++;
//             }
//             else if (nums1[i1] < nums2[i2])
//                 i1++;
//             else
//                 i2++;
//         }
        
//         return ans;
        
        
        // Using Space
        
        map<int,int> temp;
        vector<int> ans;
        
        for(auto value : nums1)
            temp[value]++;
        
        
        for(auto value : nums2)
        {
            if(temp[value])
            {
                ans.push_back(value);
                temp[value]--;
            }
        }
        
        return ans;
        
        
        
    }
};
