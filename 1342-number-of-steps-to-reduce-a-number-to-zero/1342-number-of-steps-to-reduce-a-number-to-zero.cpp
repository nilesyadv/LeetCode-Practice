class Solution {
public:
    int numberOfSteps(int num) {
        int one=0,zero=0;
        if(num==0) return 0;
        while(num)
        {
            if(num&1)
            {
                one++;
                num=num>>1;
            }
            else
            {
                zero++;
                num=num>>1;
            }       
        }
        
        return one*2+zero-1;
    }
};