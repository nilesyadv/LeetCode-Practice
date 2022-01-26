class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int r=0,c=m-1;
        while(r<n && c>=0)
        {
            if(matrix[r][c]==target) return true;
            if(matrix[r][c]<target) r++;
            else c--;
        }
        return false;
    }
};