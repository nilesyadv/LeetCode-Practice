class Solution
{
public:
    int wiggleMaxLength(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> v(n, vector<int>(2, -1));
        v[0][0] = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (v[j][1] == -1)
                {
                    if (nums[i] != nums[j])
                    {
                        if (v[i][0] < 1 + v[j][0])
                        {
                            v[i][0] = v[j][0] + 1;
                            v[i][1] = j;
                        }
                    }
                }
                else if ((nums[j] > nums[v[j][1]] && nums[j] > nums[i]) || (nums[j] < nums[v[j][1]] && nums[j] < nums[i]))
                {
                    if (v[i][0] < 1 + v[j][0])
                    {
                        v[i][0] = v[j][0] + 1;
                        v[i][1] = j;
                    }
                }
            }
        }
        
        int ans = 1;
        for (int i = 0; i < n; i++)
            ans = max(v[i][0], ans);
        return ans;
    }
};