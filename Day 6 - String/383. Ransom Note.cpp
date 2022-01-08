// 383. Ransom Note
// Easy

// 1410

// 278

// Add to List

// Share
// Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.

// Each letter in magazine can only be used once in ransomNote.

 

// Example 1:

// Input: ransomNote = "a", magazine = "b"
// Output: false
// Example 2:

// Input: ransomNote = "aa", magazine = "ab"
// Output: false
// Example 3:

// Input: ransomNote = "aa", magazine = "aab"
// Output: true
 

// Constraints:

// 1 <= ransomNote.length, magazine.length <= 105
// ransomNote and magazine consist of lowercase English letters.
// Accepted
// 325,684
// Submissions
// 590,906

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
//         unordered_map<int,int> m;
//         unordered_map<int,int> r;
        
//         for(auto value : magazine)
//             m[value]++;
        
//         for(auto value : ransomNote)
//             r[value]++;
        
//         for(auto value : ransomNote)
//             if(!(m[value]))
//                 return false;
//             else if (r[value] > m[value])
//                 return false;
        
//         return true;
        
        
//          USING SINGLE MAP        
        
//         map<int, int> m;
        
//         for(auto value : ransomNote)
//             m[value]++;
        
//         for(auto value : magazine)
//             if(m[value])
//                 m[value]--;
        
//         for(auto value : m)
//             if(value.second)
//                 return false;
        
//         return true;
        
        
//        Using vector        
        
        vector<int> count(26, 0);
        
        for(auto value : ransomNote)
            count[value-97]++;
        
        for(auto value : magazine)
            if(count[value-97] > 0)
                count[value-97]--;
        
        for(auto i = 0; i < 26; i++)
            if(count[i])
                return false;
        
        return true;
        
        
        
        
    }
};
