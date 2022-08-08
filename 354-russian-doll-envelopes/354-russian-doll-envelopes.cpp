bool sortbyCond(const pair<int, int>& a, const pair<int, int>& b)
{
    if(a.first != b.first) return (a.first < b.first);
    else return (a.second > b.second);
}

class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        vector<pair<int, int>> v;
        for(int i = 0; i < envelopes.size(); i++) v.push_back({envelopes[i][0], envelopes[i][1]});
        
        sort(v.begin(), v.end(), sortbyCond);
        
        vector<int> v1;
        for(int i = 0; i < v.size(); i++) v1.push_back(v[i].second);
        
        vector<int> LIS;
        LIS.push_back(v1[0]);
        
        for(int i = 1; i < v1.size(); i++)
        {
            if(v1[i] > LIS[LIS.size() - 1]) LIS.push_back(v1[i]);
            else
            {
                int index = lower_bound(LIS.begin(), LIS.end(), v1[i]) - LIS.begin();
                LIS[index] = v1[i];
            }
        }
        return LIS.size();
    }
};