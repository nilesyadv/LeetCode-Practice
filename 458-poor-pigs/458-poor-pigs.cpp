class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if(buckets == 1) return 0;
        int a = minutesToTest/minutesToDie + 1;
        int b = 1;
        int ans = 1;
        while(b * a < buckets)
        {
            ans++;
            b = b * a;
        }
        
        return ans;
    }
};