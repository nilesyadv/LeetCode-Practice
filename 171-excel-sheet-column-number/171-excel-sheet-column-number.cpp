class Solution {
public:
    int titleToNumber(string columnTitle) {
        int length=columnTitle.size();
        
        int k=pow(26,length-1),ans=0;
        for(int i=0;i<length;i++)
        {
            int a=(columnTitle[i]-'A'+1)*k;
            k/=26;
            ans+=a;
        }
        return ans;
    }
};