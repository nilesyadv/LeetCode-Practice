class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++) m[nums[i]]++;
        
        priority_queue<pair<int, int>> pq;
        int n = m.size();
        vector<int> ans;
        for(auto it = m.begin(); it != m.end(); it++)
        {
            pq.push({-(it -> second), it -> first});
            if(pq.size() >  k)
                pq.pop();
        }
        
        while(pq.size()) 
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;     
    }
};