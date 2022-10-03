class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        vector<int> v(colors.size(), 0);
        int i=0,j=1;
        int ans=0,n=colors.size();
        while(i < colors.size() && j < colors.size())
        {
            if(colors[i]!=colors[j]){
                if(i<j) i=j+1;
                else j=i+1;
                continue;
            }
            if(neededTime[i]<=neededTime[j]){
                ans+=neededTime[i];
                v[i]=1;
                while(i<n && (v[i]==1 || i==j)) {
                    i++;
                }
            }
            else{
                ans+=neededTime[j];
                v[j]=1;
                while(j<n && (v[j]==1 || i==j)) {
                    j++;
                }
            }
        }
        return ans;
    }
};