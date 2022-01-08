// 242. Valid Anagram
// Easy

// 3841

// 196

// Add to List

// Share
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false
 

// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.
 

// Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

// Accepted
// 1,052,170
// Submissions
// 1,734,903

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size())
            return false;
        
        vector<int> count(26,0);
        
        for(auto value : s)
            count[value-97]++;
        
        for(auto value : t)
            count[value-97]--;
        
        for(auto i = 0; i < 26; i++)
            if(count[i] != 0)
                return false;
        
        return true;
        
    }
};
