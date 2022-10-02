class Solution {
public:
    int numRollsToTarget(int d, int f, int target) {
        return tabulation(d, f, target);
    }
    
    int recursive(int d, int f, int target) {
        if (d == 1) return target <= f ? 1 : 0;
        
        int res = 0;
        for(int i = 1; i <= f && target - i > 0; ++i) {
            res = (res + recursive(d - 1, f, target - i)) % 1000000007;
        }
        
        return res;
    }
    
    int memoization(int d, int f, int target) {
        vector<vector<int>> mem(d + 1, vector<int>(target + 1, -1));
        return solve(f, mem, d, target);
    }
    
    int solve(int f, vector<vector<int>>& mem, int d, int target) {
        if (d == 1) return target <= f ? 1 : 0;
        if (mem[d][target] >= 0) return mem[d][target];
        
        mem[d][target] = 0;
        for(int i = 1; i <= f && target - i > 0; ++i) {
            mem[d][target] = (mem[d][target] + solve(f, mem, d-1, target-i)) % 1000000007;
        }
        
        return mem[d][target];
    }
    
    int tabulation(int d, int f, int target) {
        vector<vector<int>> tab(d + 1, vector<int>(target + 1));
        for(int i = 1; i < tab.size(); ++i) {
            for(int j = 0; j < tab[0].size(); ++j) {
                if (i == 1) {
                    tab[i][j] = j <= f ? 1 : 0;
                } else {
                    tab[i][j] = 0;
                    for(int k = 1; k <= f && j - k > 0; ++k) {
                        tab[i][j] = (tab[i][j] + tab[i-1][j-k]) % 1000000007;
                    }
                }
            }
        }
        
        return tab[d][target];
    }
      
};