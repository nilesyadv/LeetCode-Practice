class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> ans;
        
        for(int i =0; i<words.size(); i++)
        {
            unordered_map<char,char> m;
            unordered_map<char,int> m1;
            string s = words[i];
            bool flag = true;
            
            for(int j=0; j<s.size();j++)
            {
                char c = pattern[j];
                char d = s[j];
                //cout<<c<<" "<<d<<" "<<m[c]<<" "<<m1[d]<<endl;
                if(m[c]<'a' || m[c]>'z')
                {
                    if(m1[d]==0)
                    {
                        m[c]=d;
                        m1[d]=1;
                    }
                    else 
                    {
                       // cout<<"hi";
                        flag=false;
                        break;
                    }
                }
                else
                {
                    if(m[c]==d) continue;
                    else
                    {
                        //cout<<"Hi";
                        flag=false;
                        break;
                    }
                }
                
                //cout<<c<<" "<<d<<" "<<m[c]<<" "<<m1[d]<<endl;
            }
            //cout<<endl;
            
            if(flag) ans.push_back(s);
        }
        
        return ans;
    }
};