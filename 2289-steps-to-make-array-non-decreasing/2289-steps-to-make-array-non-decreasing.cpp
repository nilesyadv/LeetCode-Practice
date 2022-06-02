#define sp " "
class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int cnt=0;
        stack<pair<int,int>> s;
       // int cnt=0;
        s.push({nums[nums.size()-1],0});
       // map<int,int> m;
        int ans=0;
        for(int i=nums.size()-2;i>=0;)
        {
            //cout<<i<<"-->"<<cnt<<endl;
            // if(s.size()==0) cout<<"empty"<<sp;
            // else cout<<s.top().first<<sp;
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
            else
            {
                
            }
            
            cnt=max(cnt+1,s.top().second);
            s.pop();
        }
        cnt=0;
        while(s.size()!=0)
        {
            cnt=max(s.top().second,cnt);
          //  cout<<s.top().first<<sp<<s.top().second<<sp<<sp;
            s.pop();
        }
        
        return ans;
    }
};