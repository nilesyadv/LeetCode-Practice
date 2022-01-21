class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                v.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                v.push_back(nums2[j]);
                j++;
            }
            else
            {
                v.push_back(nums1[i]);
                i++;
                v.push_back(nums2[j]);
                j++;
            }
        }
        if(i==m && j==n)
        {
            nums1=v;
        }
        else if(i==m)
        {
            for(int k=j;k<n;k++) v.push_back(nums2[k]);
            nums1=v;
        }
        else
        {
            for(int k=i;k<m;k++) v.push_back(nums1[k]);
            nums1=v;
        }
    }
};