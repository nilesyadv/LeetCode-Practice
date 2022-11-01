class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> s;
        map<int, int> m;
        for(int i = 0; i < nums1.size(); i++) m[nums1[i]]++;
        for(int i = 0; i < nums2.size(); i++)
        {
            if(m[nums2[i]] && s.find(nums2[i]) == s.end())
            {
                s.insert(nums2[i]);
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};