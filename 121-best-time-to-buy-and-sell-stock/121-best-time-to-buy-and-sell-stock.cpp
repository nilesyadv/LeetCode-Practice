class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a[prices.size()];
        int maxi=0;
        for(int i=prices.size()-1;i>=0;i--)
        {
            maxi=max(maxi,prices[i]);
            a[i]=maxi;
        }
       
        int ans=0;
        for(int i=0;i<prices.size()-1;i++) ans=max(ans,a[i+1]-prices[i]);
        return ans;
    }
};