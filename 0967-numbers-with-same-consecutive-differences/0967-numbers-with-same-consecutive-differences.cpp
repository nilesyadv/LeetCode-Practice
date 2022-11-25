class Solution {
    void dfs(int n, int k, vector<int> &ans, int curr)
    {
        if(n <= 0)
        {
            ans.push_back(curr);
            return;
        }
        
        for(int i = 0; i <= 9; i++)
        {
            if(i == 0 && curr == 0) continue;
            else if(i != 0 && curr == 0)
            {
                dfs(n-1, k, ans, curr + i);
            }
            else if(curr != 0)
            {
                if(abs(i - (curr%10)) == k) dfs(n-1, k, ans, curr * 10 + i);
            }
        }
    }
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        if(n == 1) ans.push_back(0);
        dfs(n, k, ans, 0);
        return ans;
    }
};