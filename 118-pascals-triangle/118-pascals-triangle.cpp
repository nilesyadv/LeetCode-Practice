class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
      
        for(int i=0;i<numRows;i++)
        {
            vector<int> v2;
            for(int j=0;j<=i;j++)
            {
                if(j==0) v2.push_back(1);
                else if(j==i) v2.push_back(1);
                else v2.push_back(v[i-1][j-1]+v[i-1][j]);
            }
            v.push_back(v2);
        }
        return v;
    }
    
};