class Solution {
public:
    int compareVersion(string version1, string version2) {
        int cnt1=0,cnt2=0;
        for(int i=0;i<version1.size();i++) if(version1[i]=='.') cnt1++;
        for(int i=0;i<version2.size();i++) if(version2[i]=='.') cnt2++;
        int k=abs(cnt2-cnt1);
        
        if(cnt1<cnt2) for(int i=0;i<k;i++) version1+=".0";
        else for(int i=0;i<k;i++) version2+=".0";
        
        //cout<<version1<<endl<<version2<<endl;
        int i=0,j=0;
        while(1)
        {
            string s1;
            while(i<version1.size() && version1[i]!='.')
            {
                s1+=version1[i];
                //num1=num1+k*(int)(version1.at(i)-'0');
                i++;
                //if(i>=0 && version1[i]!='.') k*=10;
            }
            i++;
            int num1=stoi(s1);
            
            string s2;
            while(j<version2.size() && version2[j]!='.')
            {
                s2+=version2[j]; 
                //num2=num2+k1*(int)(version2.at(j)-'0');
                 j++;
                 //if(j>=0 && version2[j]!='.') k1*=10;
            }
            j++;
            int num2=stoi(s2);
            //cout<<num1<<" "<<num2<<" "<<i<<" "<<j<<endl;
            //if(num1!=num2) nums1=num1,nums2=num2;
            
            if(num1<num2) return -1;
            else if(num1>num2) return 1;
            if(i>=version1.size() && j>=version2.size()) break;
        }
        // if(nums1>nums2) return 1;
        // else if(nums1<nums2) return -1;
        return 0;
  
    }
};