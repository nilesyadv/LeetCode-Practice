class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target)
  {
    int n = matrix.size(), m = matrix[0].size();
    int midi, midj,s=1,e=n*m;
    int mid =s+(e-s)/2;

    if (mid % m == 0)
    {
      midi = mid / m - 1;
      midj = m - 1;
    }
    else
    {
      midi = mid / m;
      midj = mid % m - 1;
    }
    while (s <= e)
    {
      if (matrix[midi][midj] == target)
        return true;
      if (matrix[midi][midj] > target)
        e = mid - 1;
      else
        s = mid + 1;

      mid = s + (e - s) / 2;
      if (mid % m == 0)
      {
        midi = mid / m - 1;
        midj = m - 1;
      }
      else
      {
        midi = mid / m;
        midj = mid % m - 1;
      }
    }
    return false;
  }
};