class Solution {
public:
    string removeOccurrences(string s, string part) {
        bool f1=true;
        int n=part.size();
        while(s.size()>=n)
        {
            bool f2=false;
            string s1;
            for(int i=0;i<s.size();)
            {
                if(s.substr(i,n)==part && !f2)
                {
                    f2=true;
                    i=i+n; 
                }
                else s1+=s[i++];
            }
            s=s1;
            if(f2) continue;
            else break;
        }
        return s;
    }
};