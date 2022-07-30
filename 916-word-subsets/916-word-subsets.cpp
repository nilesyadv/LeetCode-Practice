class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        map<char,int> m;
        vector<string> ans;
        for(int i = 0; i < words2.size(); i++)
        {
            string s = words2[i];
            map<char,int> m1;
            for(int j = 0; j < s.size(); j++)
            {
                m1[s[j]]++;
                m[s[j]] = max(m1[s[j]], m[s[j]]);
            }
        }
        
        for(int i = 0; i < words1.size(); i++)
        {
            string s = words1[i];
            map<char,int> m1;
            bool flag = true;
            //cout<<s<<" "<<endl;
            for(int j = 0; j < s.size(); j++)
            {
                m1[s[j]]++;
            }
            
            for(char c = 'a'; c <= 'z'; c++)
            {
                if(m1[c] < m[c]) {flag = false; break;}
            }
            
            if(flag) ans.push_back(words1[i]);
        }
        
        return ans;
        
    }
};