class Solution {
public:
    int divide(int dividend, int divisor) {
        long long n=dividend,m=divisor;
        long long temp=0,q=0;
        int sign=1;
        if((n>=0 && m<0) || (n<0 && m>=0)) sign=-1;
        n=abs(n);
        m=abs(m);
        
        if(m>n) return 0;
        if(m==n) return 1*sign;
        
        for(long long i=32;i>=0;i--)
        {
            if(temp+(m<<i)<=n)
            {
                temp+=(m<<i);
                q|=(1LL<<i);
            }
        }
        
        if(sign==-1) q=q*-1;
        if(q>INT_MAX) return INT_MAX;
        else if(q<INT_MIN) return INT_MIN;
        else return q;
    }
};