class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        vector<int> v1,v2;
        int totalSum1=0,totalSum2=0;
        
       // for(int i=0;i<n;i++) {v1.push_back(nums2[i]-nums1[i]); v2.push_back(nums2[i]-nums1[i]);}
        
        int maxDelta1=0,maxDelta2=0,curr1=0,curr2=0;
        for(int i=0;i<n;i++)
        {
            curr1+=nums2[i]-nums1[i];
            curr2+=nums1[i]-nums2[i];
            
            totalSum1+=nums1[i];
            totalSum2+=nums2[i];
            
            if(curr1<0) curr1=0;
            if(curr2<0) curr2=0;
            
            maxDelta1=max(maxDelta1,curr1);
            maxDelta2=max(maxDelta2,curr2);
        }
        return max(totalSum1+maxDelta1,totalSum2+maxDelta2);
        
    }
};