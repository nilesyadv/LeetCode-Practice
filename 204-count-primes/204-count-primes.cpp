

        
class Solution {
public:
    int countPrimes(int n) {
    
        int a[n+1];
        for(int i=0;i<=n;i++) a[i]=1;
        int cnt=0;
        for(int i=2;i<n;i++)
        {
            if(a[i]) 
            {
                cnt++;
                for(int j=i;j<n;j=j+i) a[j]=0;
            }
        }
        return cnt;
  
    }
};
   