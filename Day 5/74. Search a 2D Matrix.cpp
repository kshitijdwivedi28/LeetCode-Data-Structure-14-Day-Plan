// 74. Search a 2D Matrix
// Medium

// 5513

// 239

// Add to List

// Share
// Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.
 

// Example 1:


// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:


// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false
 

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 100
// -104 <= matrix[i][j], target <= 104
// Accepted
// 610,236
// Submissions
// 1,464,457

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//         vector<int> matrix_into_arr;
        
//         for(int i = 0; i < matrix.size(); i++)
//             for(int j = 0; j < matrix[0].size(); j++)
//                 matrix_into_arr.push_back(matrix[i][j]);
        
//         return binary_search(matrix_into_arr.begin(), matrix_into_arr.end(), target);
        
        
        // binary search on 2-d matrix in sorted order
        
        int r = 0, c = matrix[0].size()-1;
        
        while(c >=0 && r <= matrix.size()-1)
        {
            if(matrix[r][c] == target)
                return true;
            else if(matrix[r][c] > target)
                c--;
            else
                r++;
        }
        return false;
        
    }
};
