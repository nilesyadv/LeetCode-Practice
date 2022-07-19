class Solution {
    int dp[101][101][201];
    bool Interleave(string &s1, string &s2, string &s3, int i, int j, int k)
    {
        //cout<<i<<" "<<j<<" "<<k<<endl;
        //return true;
        if(i==s1.size() && j==s2.size() && k==s3.size()) return dp[i][j][k]=1;
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        if(i==s1.size())
        {
            if(s3[k]==s2[j]) return dp[i][j][k]=Interleave(s1,s2,s3,i,j+1,k+1);
            else return dp[i][j][k]=0;
        }
        else if(j==s2.size())
        {
            if(s3[k]==s1[i]) return dp[i][j][k]=Interleave(s1,s2,s3,i+1,j,k+1);
            else return dp[i][j][k]=0;
        }
        else
        {
            if(s3[k]==s1[i] && s3[k]==s2[j])
                return dp[i][j][k]=(Interleave(s1,s2,s3,i+1,j,k+1) | Interleave(s1,s2,s3,i,j+1,k+1));
            else if(s3[k]==s1[i]) return dp[i][j][k]=Interleave(s1,s2,s3,i+1,j,k+1);
            else if(s3[k]==s2[j]) return dp[i][j][k]=Interleave(s1,s2,s3,i,j+1,k+1);
            else return dp[i][j][k]=0;                                      
        }
    }
    
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s3.size()!=s1.size()+s2.size()) return false;
        //int dp[101][101][201];
        for(int i=0;i<=100;i++)
            for(int j=0;j<=100;j++)
                for(int k=0;k<=200;k++) dp[i][j][k]=-1;
       
        return Interleave(s1,s2,s3,0,0,0);
        return true;
    }
};