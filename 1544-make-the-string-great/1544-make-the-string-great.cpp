class Solution {
public:
    string makeGood(string s) {
        string ans;
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(i+1 < s.size() && abs(s[i] - s[i+1]) == 32) i++;
            else 
            {
                if(st.empty() || abs(st.top() - s[i]) != 32) st.push(s[i]);
                else st.pop();
            }
        }
        while(st.size())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};