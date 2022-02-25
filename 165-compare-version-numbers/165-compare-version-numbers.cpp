class Solution {
public:
    int compareVersion(string version1, string version2) {
        int cnt1=0,cnt2=0;
        for(int i=0;i<version1.size();i++) if(version1[i]=='.') cnt1++;
        for(int i=0;i<version2.size();i++) if(version2[i]=='.') cnt2++;
        int k=abs(cnt2-cnt1);
        
        if(cnt1<cnt2) for(int i=0;i<k;i++) version1+=".0";
        else for(int i=0;i<k;i++) version2+=".0";
        
        int i=0,j=0;
        while(1)
        {
            string s1;
            while(i<version1.size() && version1[i]!='.')
                s1+=version1[i++];
            i++;
            
            int num1=stoi(s1);
            
            string s2;
            while(j<version2.size() && version2[j]!='.')
                s2+=version2[j++];
            j++;
            
            int num2=stoi(s2);
           
            if(num1<num2) return -1;
            else if(num1>num2) return 1;
            if(i>=version1.size() && j>=version2.size()) break;
        }
        return 0;
    }
};