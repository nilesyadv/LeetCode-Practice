
class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        int a[n+1];
        for(int i=0;i<=n;i++) a[i]=1;
        a[0]=0;
        a[1]=0;
        a[2]=1;
        for(int i=2;i*i<=n;i++)
        {
            for(int j=i;j*i<n;j++) a[j*i]=0;
        }
        int cnt=0;
        for(int i=0;i<n;i++) if(a[i]==1) cnt++;
        return cnt;
  
    }
};