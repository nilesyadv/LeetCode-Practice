class Solution {
public:
    int titleToNumber(string columnTitle) {
        int length=columnTitle.size();
        int k=26,i=1,ans=0;
        
        while(i<length)
        {
            ans+=k;
            i++;
            if(i==length) break;
            k=k*26;
        }
       
        for(int i=0;i<length;i++)
        {
            int k=pow(26,length-i-1);
            int a=(columnTitle[i]-'0')-('A'-'0');
            ans+=a*k;
        }
        return ans+1;
    }
};