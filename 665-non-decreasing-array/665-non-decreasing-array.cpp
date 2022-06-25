class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int needToDecrease=0,needToIncrease=0;
        vector<int> v; 
        v=nums;
        int size=nums.size();
        for(int i=size-2;i>=0;i--)
        {
            if(nums[i]>nums[i+1])
            {
                nums[i]=nums[i+1];
                needToDecrease++;
            }
        }
        nums=v;
        
        for(int i=1;i<size;i++)
        {
            if(nums[i]<nums[i-1])
            {
                nums[i]=nums[i-1];
                needToIncrease++;
            }
        }
        
        //cout<<needToIncrease<<" "<<needToDecrease<<endl;
        
        if(needToIncrease>1 && needToDecrease>1) return false;
        return true;
        
    }
};