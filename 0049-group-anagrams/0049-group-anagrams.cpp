class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> m;
        map<vector<int>, int> m1;
        for(int i = 0; i < strs.size(); i++)
        {
            vector<int> v(26, 0);
            for(int j = 0; j < strs[i].size(); j++)
            {
                v[strs[i][j]-'a']++;
            }
            m[v].push_back(strs[i]);
            m1[v]++;
        }
        vector<vector<string>> ans;
        
        for(int i = 0; i < strs.size(); i++)
        {
            vector<int> v(26, 0);
            for(int j = 0; j < strs[i].size(); j++)
            {
                v[strs[i][j]-'a']++;
            }
            if(m1[v])
            {
                m1[v] = 0;
                ans.push_back(m[v]);
            }
        }
        return ans;
        
    }
};