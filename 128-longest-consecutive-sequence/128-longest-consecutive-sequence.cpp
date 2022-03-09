class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int ans=0;
        
        for(int i=0;i<nums.size();i++) s.insert(nums[i]);
        
        for(int i=0;i<nums.size();i++)
        {
            if(s.count(nums[i]-1)==0)
            {
                int y=nums[i];
                int cnt=0;
                while(s.count(y))
                {
                    cnt++;
                    y=y+1;
                }
                ans=max(ans,cnt);
            }
        }
        
        return ans;
        
    }
};