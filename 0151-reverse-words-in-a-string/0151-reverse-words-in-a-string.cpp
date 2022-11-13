class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string ans;
        for(int i = s.size() - 1; i >= 0; )
        {
            int j = i;
            while(j>=0 && s[j]==' ') j--;
            while(j>=0 && s[j]!=' ') j--;
            int t = j + 1;
            string p;
            while(t < s.size() && s[t] != ' ')
            {
                p += s[t];
                t++;
            }
            v.push_back(p);
            //cout<<p<<"-"<<p.size()<<" ";
            if(p.size())ans = ans + p + ' ';
            i = j;
        }
         ans.pop_back();
        // ans.pop_back();
         //cout<<endl;
        // cout<<ans<<endl;
        return ans;
    }
};