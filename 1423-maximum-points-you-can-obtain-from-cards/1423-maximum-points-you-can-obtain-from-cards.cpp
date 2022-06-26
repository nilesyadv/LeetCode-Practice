class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long sum=0;
        int n=cardPoints.size();
        for(int i=0;i<n;i++) sum+=cardPoints[i];
        //cout<<sum<<endl;
        if(n-k==0) return sum;
        int i=0,j=(i+n-k-1);
        long long leastSum=0;
        //cout<<i<<" "<<j<<endl;
        for(int k=0;k<=j;k++) leastSum+=cardPoints[k];
        i++; j++;
        //cout<<leastSum<<" "<<endl;
        long long currSum=leastSum;
        while(j<n)
        {
            
            currSum=currSum-cardPoints[i-1]+cardPoints[j];
            leastSum=min(leastSum,currSum);
            
           // cout<<leastSum<<" "<<i<<" "<<j<<endl;;
            i++;
            j++;
        }
        //cout<<endl;
        return sum-leastSum;
    } 
};