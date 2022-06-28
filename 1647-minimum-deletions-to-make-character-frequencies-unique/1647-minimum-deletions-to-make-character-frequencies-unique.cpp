class Solution {
public:
    int minDeletions(string s) {
        vector<int> alphabetCount(26,0);
        int n=s.size();
        for(int i=0;i<n;i++) 
            alphabetCount[s[i]-'a']++; 
        
        sort(alphabetCount.begin(),alphabetCount.end());
        int ans=0;
        for(int i=24;i>=0;i--)
        {
            if(alphabetCount[i+1]==0)
            {
                ans+=alphabetCount[i];
                alphabetCount[i]=0;
            }
            else if(alphabetCount[i]>=alphabetCount[i+1])
            {
                ans+=(alphabetCount[i]-(alphabetCount[i+1]-1));
                alphabetCount[i]=alphabetCount[i+1]-1;
            }
        }
        
        return ans;       
    }
};