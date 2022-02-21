class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++) 
        {
            m[nums[i]]++;
            if(m[nums[i]]>n) return nums[i];
        }
        return 0;
    }
};