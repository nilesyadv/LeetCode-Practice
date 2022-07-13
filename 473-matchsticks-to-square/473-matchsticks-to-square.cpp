class Solution {
    bool backtrack(vector<int> &sideLength, int index, int lengthPerSide, vector<int>& matchsticks)
    {
        if(index == matchsticks.size()) return true;
        
        for(int i = 0; i < 4; i++)
        {
            if(sideLength[i] + matchsticks[index] > lengthPerSide) continue;
            
            int j = i;
            while (--j >= 0)
                if (sideLength[i] == sideLength[j]) 
                    break;
            if (j != -1) continue;
            
            sideLength[i] += matchsticks[index];
            if(backtrack(sideLength, index+1, lengthPerSide, matchsticks)) return true;
            sideLength[i] -= matchsticks[index];
        }
        return false;
    }
public:
    bool makesquare(vector<int>& matchsticks) {
         
        int sum = 0,n = matchsticks.size();
        for (int i = 0; i < n; i++) sum += matchsticks[i];
        if (sum%4) return false; 
        vector<int> sidesLength(4, 0);
        
        sort (matchsticks.begin(), matchsticks.end(), greater<int>());
        for(int j = 0; j < n; j++) cout<<matchsticks[j]<<" ";
        
        return backtrack(sidesLength, 0, sum/4, matchsticks);
        
    }
};