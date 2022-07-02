class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
    
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int maxRowDiff=horizontalCuts[0]-0;
        int maxColDiff=verticalCuts[0]-0;
        
        if(horizontalCuts.back()!=h) horizontalCuts.push_back(h);
        if(verticalCuts.back()!=w) verticalCuts.push_back(w);
        int row=horizontalCuts.size(),col=verticalCuts.size();
        
        for(int i=1;i<row;i++) maxRowDiff=max(maxRowDiff,horizontalCuts[i]-horizontalCuts[i-1]);
        for(int i=1;i<col;i++) maxColDiff=max(maxColDiff,verticalCuts[i]-verticalCuts[i-1]);
        
        long long MOD=1e9+7;
        long long ans=((maxRowDiff%MOD)*(maxColDiff%MOD))%MOD;
        return ans;
        
        
    }
};