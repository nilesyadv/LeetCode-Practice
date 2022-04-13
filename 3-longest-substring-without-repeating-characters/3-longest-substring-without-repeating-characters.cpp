class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len=0;
        int l=0,r=0;
        unordered_set<char> set;
        int n=s.size();
        while(r<n)
        {
            if(set.find(s[r])==set.end())
            {
                max_len=max(max_len,r-l+1);
                set.insert(s[r]);
                r++;
            }
            else
            {
                set.erase(s[l]);
                l++;
            }
        }
        
        return max_len;
    }
};