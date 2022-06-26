class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long sum=0;
        int n=cardPoints.size();
        for(int i=0;i<n;i++) sum+=cardPoints[i];
        
        if(n-k==0) return sum;
        int i=0,j=(i+n-k-1);
        long long leastSum=0;
        
        for(int k=0;k<=j;k++) leastSum+=cardPoints[k];
        i++; j++;
        long long currSum=leastSum;
        while(j<n)
        {
            currSum=currSum-cardPoints[i-1]+cardPoints[j];
            leastSum=min(leastSum,currSum);
            i++; j++;
        }
        return sum-leastSum;
    } 
};