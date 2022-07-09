class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        
        priority_queue<pair<int,int>> p;
        int n=nums.size();
        
        p.push({nums[0],0});

        for(int i=1;i<n;i++)
        {
            while(p.top().second<i-k) p.pop();
            if(i==n-1) return nums[i]+p.top().first;
            p.push({nums[i]+p.top().first,i});
        }
        return p.top().first;
    }
};