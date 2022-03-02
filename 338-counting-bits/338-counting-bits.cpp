class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
       for(int i=0;i<=n;i++)
       {
           int cnt=0;
           int num=i;
           while(num)
           {
               cnt+=num&1;
               num=num>>1;
           }
           v.push_back(cnt);
       }
        return v;
    }
};