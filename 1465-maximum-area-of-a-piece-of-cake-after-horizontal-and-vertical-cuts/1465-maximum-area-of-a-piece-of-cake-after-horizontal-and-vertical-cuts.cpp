class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
    
	    horizontalCuts.push_back(0); horizontalCuts.push_back(h);
		verticalCuts.push_back(0); verticalCuts.push_back(w);
		
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        int row=horizontalCuts.size(),col=verticalCuts.size();
		int maxRowDiff=0, maxColDiff=0;
        
        for(int i=1;i<row;i++) maxRowDiff=max(maxRowDiff,horizontalCuts[i]-horizontalCuts[i-1]);
        for(int i=1;i<col;i++) maxColDiff=max(maxColDiff,verticalCuts[i]-verticalCuts[i-1]);
        
        long long MOD=1e9+7;
        long long ans=((maxRowDiff%MOD)*(maxColDiff%MOD))%MOD;
        return ans;
              
    }
};