class Solution {
public:
    string countAndSay(int n) {
        string s = "1&";
        for(int i = 2; i <= n; i++)
        {
            int size = s.size();
            int cnt = 1;
            string s2 = "";
            for(int j = 1; j < size; j++)
            {
                if(s[j] == s[j-1]) cnt++;
                else 
                {
                    s2 += to_string(cnt);
                    s2 += s[j-1];
                    cnt = 1;
                }
            }
            s = s2 + '&';
        }
        return s.substr(0, s.size() - 1);
    }
};