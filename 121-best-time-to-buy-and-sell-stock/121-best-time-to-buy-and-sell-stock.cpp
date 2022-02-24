class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini=1000000,profit=0;
        for(int i=0;i<prices.size();i++)
        {
           mini=min(prices[i],mini);
           profit=max(profit,prices[i]-mini);
        } 
        return profit;
       
    }
};