class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        bool flag=true;
        int i=0;
        while(i!=nums.size())
        {
            if(nums[i]==0)
            {
                int j=i+1;
                for(;j<nums.size();j++)
                {
                    if(nums[j]!=0)
                    {
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
                i++;
            }
            else i++;
        }
    }
};