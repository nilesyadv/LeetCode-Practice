class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i=0,j=0;
        int cnt=0;
        for(;i<s.size();i++)
        {
            for(;j<t.size();j++)
            {
                if(cnt==s.size()) return true;
                if(s[i]==t[j])
                {
                    cnt++;
                    j++;
                    break;
                }
            }
        }
        
        if(cnt==s.size()) return true;
        return false;
    }
};