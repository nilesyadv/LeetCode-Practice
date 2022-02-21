class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int curr=nums[0],cnt=0;
        int ans=0,ans1,i=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==curr) cnt++;
            else
            {
                //ans=max(cnt,ans);
                if(cnt>ans)
                {
                    ans=cnt;
                    ans1=nums[i-1];
                    
                }
                cnt=0;
                curr=nums[i];
                i--;
            }
        } 
        if(cnt>ans)
                {
                    ans=cnt;
                    ans1=nums[i-1];
                    
                }
        //ans=max(ans,cnt);
        return ans1;
    }
};