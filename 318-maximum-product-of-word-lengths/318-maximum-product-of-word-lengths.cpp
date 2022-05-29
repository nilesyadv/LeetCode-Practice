#define sp " "
class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<vector<int>> v( n , vector<int> (26, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                int c=(int)(words[i][j]-'a');
                v[i][c]=1;
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                bool flag=true;
                for(int k=0;k<26;k++)
                {
                    if(v[i][k]==1 && v[j][k]==1)
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag) ans=max(ans,(int)(words[i].size()*words[j].size()));
            }
        }
        return ans;
    }
};