class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int needToDecrease=0,needToIncrease=0;
        int size=nums.size();
        int lastElement=nums[size-1],firstElement=nums[0];
        for(int i=size-2;i>=0;i--)
        {
            if(nums[i]>lastElement) needToDecrease++;
            else lastElement=nums[i];
        }
       
        for(int i=1;i<size;i++)
        {
            if(nums[i]<firstElement) needToIncrease++;
            else firstElement=nums[i];
        }
        
        if(needToIncrease>1 && needToDecrease>1) return false;
        return true;
        
    }
};