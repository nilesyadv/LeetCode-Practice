class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        set<pair<int,int>, greater<pair<int,int>>> s;
        int n=nums.size();
        int dp[n]; dp[0]=nums[0];
        s.insert({dp[0],0});
        int t=-100000;
        for(int i=1;i<n;i++)
        {
            //cout<<s.size()<<" ";
        if(s.size()>k) {/*cout<<endl<<s.size()<<" "<<dp[i-k]<<" "<<i<<" "<<k<<endl;*/s.erase({dp[i-k-1],i-k-1});}
            pair<int,int> p=*s.begin();
            dp[i]=nums[i]+p.first; //cout<<p.first<<" ";
            s.insert({dp[i],i});
            
            //cout<<"hi";
        }
        // for(int i=0;i<n;i++) cout<<dp[i]<<" ";
        // cout<<endl;
        // s.insert({10,2});
        // s.insert({10,6});
        // s.insert({50,1});
        // s.insert({20,6});
        //pair<int,int> p=*(s.begin());
        //cout<<p.first<<" "<<p.second<<endl;
        //cout<<*(s.begin())<<endl;
        return dp[n-1];
    }
};