class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size() > s.size()) return {};
        vector<int> hashArraySub(26, 0);
        vector<int> hashArrayStrP(26, 0);
        
        for(int i = 0; i < p.size(); i++)
        {
            hashArrayStrP[p[i] - 'a']++;
            hashArraySub[s[i] - 'a']++;
        }
        
        vector<int> ans;
        
        int start = 0, end = p.size() - 1;
        while(end < s.size())
        {
            bool flag = true;
            for(int i = 0; i < 26; i++)
            {
                if(hashArraySub[i] != hashArrayStrP[i])
                {
                    flag = false;
                    break;
                }
            }
            if(flag) ans.push_back(start);
            hashArraySub[s[start] - 'a']--;
            if(end + 1 < s.size()) hashArraySub[s[end+1] - 'a']++;
            start++;
            end++;
        }
        
        return ans;
    }
};