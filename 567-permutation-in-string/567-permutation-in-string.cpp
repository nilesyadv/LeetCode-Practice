class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26),v2(26);
        if(s2.size()<s1.size()) return false;
        
        for(int i=0;i<s1.size();i++) v1[s1[i]-'a']++;
      
        for(int i=0;i<s1.size();i++) v2[s2[i]-'a']++;
        if(v1==v2) return true;
        for(int i=s1.size();i<s2.size();i++)
        {
            v2[s2[i-s1.size()]-'a']--;
            v2[s2[i]-'a']++;
            if(v1==v2) return true;
        }
        return false;
    }
};