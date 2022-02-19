class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> v;
        if(finalSum%2!=0) return v;
        long long sum=0;
        long long mul=2,a=0;
        
        while(1)
        {
            if(sum+(a+mul)<finalSum)
            {
                a=a+mul;
                sum=sum+a;
                v.push_back(a);
            }
            else if(sum+(a+mul)==finalSum)
            {
                a=a+mul;
                v.push_back(a);
                return v;
            }
            else
            {
                v.back()=v.back()+(finalSum-sum);
                return v;
            }
        }
    }
};