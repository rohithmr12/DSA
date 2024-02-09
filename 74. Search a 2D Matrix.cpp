#include<utility>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int low = 0;
        int high = (row * col) - 1; // after flattenning the 2D matrix into 1D
        while(low <= high) {
            int mid = (low + high) / 2;
            int r = mid / col; // converting 1D index
            int c = mid % col; // to 2D index
            if(matrix[r][c] == target) return true;
            else if(matrix[r][c] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};
//copy kara hai mera code nahi hai mera memory mamage err ara hor tha