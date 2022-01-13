class Solution {
public:
    int mySqrt(int x) {
       if(x==0) return 0;
      int s=1,e=min(46340,x);
      int mid=s+(e-s)/2;
        while(e>s+1)
        {
            if(mid*mid==x) return mid;
            else if(mid*mid>x) e=mid-1;
            else s=mid;
            mid=s+(e-s)/2;
        }
        if(e*e<=x) return e;
        else return s;
    }
};