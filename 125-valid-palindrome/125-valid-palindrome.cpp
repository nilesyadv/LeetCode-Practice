class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z') s1+=s[i]+32;
            else if(s[i]>='a' && s[i]<='z') s1+=s[i];
            else if(s[i]>='0' && s[i]<='9') s1+=s[i];
        }
        //cout<<s1<<endl;
        int i=0,j=s1.size()-1;
        while(i<=j) if(s1[i++]!=s1[j--]) return false;
        return true;
    }
};