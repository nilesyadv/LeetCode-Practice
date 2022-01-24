class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>m1;
        for(int i=0;i<s1.size();i++) m1[s1[i]]++;
        //bool flag=false;
        if(s2.size()<s1.size()) return false;
        for(int i=0;i<=s2.size()-s1.size();i++)
        {
            unordered_map<char,int>m2;
            for(int j=i;j<i+s1.size();j++) m2[s2[j]]++;
            bool flag=true;;
            for(int t=0;t<s1.size();t++)
            {
                if(m1[s1[t]]!=m2[s1[t]])
                {
                    flag=false;
                    break;
                }
            }
            if(flag) return true;  
        }
        return false;
    }
};