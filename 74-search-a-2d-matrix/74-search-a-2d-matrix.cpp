class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target)
  {
    int n = matrix.size(), m = matrix[0].size();
    int s=0,e=n*m-1;
    int mid =s+(e-s)/2;

    while (s <= e)
    {
      int element=matrix[mid/m][mid%m];
      if (element == target)
        return true;
      if (element > target)
        e = mid - 1;
      else
        s = mid + 1;

      mid = s + (e - s) / 2;
    }
    return false;
  }
};