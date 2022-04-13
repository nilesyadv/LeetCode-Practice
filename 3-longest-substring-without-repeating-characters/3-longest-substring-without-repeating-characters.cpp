class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len=0;
        int l=0,r=0;
        unordered_set<char> set;
        unordered_map <char,int> m;
        int n=s.size();
        while(r<n)
        {
            if(set.find(s[r])==set.end())
            {
                max_len=max(max_len,r-l+1);
                set.insert(s[r]);
                m[s[r]]=r;
                r++;
            }
            else
            {
                if(m[s[r]]<l) 
                {
                    m[s[r]]=r;
                }
                else
                {
                    l=m[s[r]]+1;
                    m[s[r]]=r;
                }
                max_len=max(max_len,r-l+1);
                r++;  
            }
        }
        
        return max_len;
    }
};