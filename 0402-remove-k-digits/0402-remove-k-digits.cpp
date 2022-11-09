class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        string res = "";
        s.push(num[0]);
        for(int i = 1; i < num.size(); i++)
        {
            while(k && !s.empty() && num[i] < s.top())
            {
                k--;
                s.pop();
            }
            s.push(num[i]);
            if(s.size() == 1 && s.top() == '0') s.pop();
        }
        
        while(k && !s.empty())
        {
            k--;
            s.pop();
        }
        
        if(s.size() == 0) return "0";
        while(s.size())
        {
            res += s.top();
            s.pop();
        }
        
        reverse(res.begin(), res.end());
        return res;
        
    }
};