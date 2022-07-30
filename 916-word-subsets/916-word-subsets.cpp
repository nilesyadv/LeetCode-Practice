class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
       
        vector<int> hash(26, 0);
        vector<string> ans;
        
        for(int i = 0; i < words2.size(); i++)
        {
            string s = words2[i];
            vector<int> hashTemp(26, 0);
            for(int j = 0; j < s.size(); j++)
            {
                hashTemp[(int)(s[j]-'a')]++;
                hash[(int)(s[j]-'a')] = max(hashTemp[(int)(s[j]-'a')], hash[(int)(s[j]-'a')]);
            }
        }
        
        for(int i = 0; i < words1.size(); i++)
        {
            string s = words1[i];
            vector<int> hashTemp(26, 0);;
            bool flag = true;
            
            for(int j = 0; j < s.size(); j++)
                hashTemp[(int)(s[j]-'a')]++;
           
            for(int j = 0; j < 26; j++)
                if(hashTemp[j] < hash[j]) {flag = false; break;}    
            
            if(flag) ans.push_back(words1[i]);
        }
        
        return ans;
        
    }
};