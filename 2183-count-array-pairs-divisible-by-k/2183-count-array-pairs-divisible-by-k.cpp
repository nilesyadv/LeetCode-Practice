class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int acont=__gcd(nums[i],k);
            int t=k/acont;
            for(auto& it: m)
                if(it.first%t==0) ans=ans+it.second;
            
            m[acont]++;
        }
        
        return ans;
    }
};