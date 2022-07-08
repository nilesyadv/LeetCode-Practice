class Solution {
public:
    //declare dp of size m*m*n (the max possible)
    int dp[100][100][21];
    
    const int mx = 1e7+1;
    int f(vector<int>& houses, vector<vector<int>>& cost, int target, int idx, int count, int prev){
        //base cases
        if(idx == houses.size()) return count==target ? 0 : mx;
        
        //memoization
        if(dp[idx][count][prev]!=-1) return dp[idx][count][prev];
        
        int minCost = mx;
        //If already painted
        if(houses[idx]){
            
            //if prev house is of different color, increase the count by 1
            if(houses[idx]!=prev) minCost = f(houses,cost,target,idx+1,count+1,houses[idx]);
            
            else minCost = f(houses,cost,target,idx+1,count,houses[idx]);
            
        }else{
            //we have to try all the colors
            for(int j=0;j<cost[0].size();j++){
                int tmp;  //store the current cost
                
                //if prev house is of different color, increase the count by 1
                if((j+1)!=prev) tmp = cost[idx][j] + f(houses,cost,target,idx+1,count+1,j+1);
                
                else tmp = cost[idx][j] + f(houses,cost,target,idx+1,count,j+1);
                
                minCost = min(minCost,tmp);
            }
        }
        //store before returning
        return dp[idx][count][prev] = minCost;
    }
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        memset(dp,-1,sizeof(dp));
        
        // 0 0 0 represents the current index(idx) , neighbourhood count(count), color of prev house(prev)
        int ans = f(houses,cost,target,0,0,0);
        
        //if no solution exist
        if(ans==mx) return -1;
        else return ans;
    }
};