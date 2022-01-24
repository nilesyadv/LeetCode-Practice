class Solution {
public:
    string removeDuplicates(string s) {
        for(int i=0;i<s.size()-1;)
        {
            if(s.size()<2) break;
            if(s[i]==s[i+1])
            {
                s.erase(i,2);
                i=max(0,i-1);
            }
            else i++;
        }
        return s;
    }
};