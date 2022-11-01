class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, int> m;
        for(int i = 0; i < nums1.size(); i++) if(m[nums1[i]] == 0) m[nums1[i]]++;
        for(int i = 0; i < nums2.size(); i++)
        {
            if(m[nums2[i]] == 1)
            {
                m[nums2[i]]++;
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};