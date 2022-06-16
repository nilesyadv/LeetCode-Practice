class Solution {
    int longest(string &s,int left,int right,int n)
    {
        if(left<0 || right>=n) return 1;
        while(left>=0 && right<n && s[left]==s[right])
        {
            left--;
            right++;
        }
        // left=max(left,0);
        // right=min(right,n-1);
        // return right-left+1
        right--;
        left++;
        return right-left+1;
    }
    
public:
    string longestPalindrome(string s) {
        if(s.size()<=1) return s;
        int n=s.size();
        int start=0,end=0;
        for(int i=0;i<n;i++)
        {
            int len1=longest(s,i,i,n);
            int len2=longest(s,i,i+1,n);
            len1=max(len1,len2);
            if(len1>end-start+1)
            {
                start=i-(len1-1)/2;
                end=i+len1/2;
            }
        }
        
        return s.substr(start,end-start+1);
        //return s;
        
    }
};