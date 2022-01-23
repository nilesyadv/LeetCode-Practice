class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int f=0,b=s.size()-1;
        for(int i=0;i<s.size();i++) 
        {
            if(s[i]!=' ')
            {
                f=i; break;
            }
        }
        
        for(int i=s.size()-1;i>=0;i--) 
        {
            if(s[i]!=' ')
            {
                b=i; break;
            }
        }
        //cout<<f<<" "<<b<<endl;
        
        int j=b;
        while(j>=f)
        {
                while(j>=f && s[j]!=' ')
                {
                    j--;
                }
                for(int i=j+1;s[i]!=' ' && i<=b; i++) 
                {
                    ans+=s[i];
                }
            
                if(j>f) ans+=" ";
            
                while(j>=f && s[j]==' ')
                {
                    j--;
                }
        }
        
        return ans;
    }
};