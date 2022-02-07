class Solution {
public:
    int fib(int n) {
       if(n<2) return n;
       int a=0,b=1;
        int ans=0;
        for(int i=2;i<=n;i++)
        {
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
    }
};