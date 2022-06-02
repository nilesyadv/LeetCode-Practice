#define sp " "
class Solution {
public:
    int totalSteps(vector<int>& nums) {
       
        int cnt=0,ans=0;
        stack<pair<int,int>> s;
        
        for(int i=nums.size()-1;i>=0;)
        {
            if(s.size()==0) 
            {
                s.push({nums[i],cnt});
                ans=max(ans,cnt);
                cnt=0;
                i--;
                continue; 
            }
            
            if(nums[i]<=s.top().first)
            {
                s.push({nums[i],cnt});
                ans=max(ans,cnt);
                cnt=0;
                i--;
                continue;
            }
            cnt=max(cnt+1,s.top().second);
            s.pop();
        }

        return ans;
    }
};