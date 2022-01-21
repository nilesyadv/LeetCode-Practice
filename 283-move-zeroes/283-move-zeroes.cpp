class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        bool flag=true;
        int i=0,j=1;
        while(i!=nums.size() && flag)
        {
            if(nums[i]==0)
            {
                j=max(i+1,j);
                flag=false;
                for(;j<nums.size();j++)
                {
                    if(nums[j]!=0)
                    {
                        swap(nums[i],nums[j]);
                        flag=true;
                        break;
                    }
                }
                i++;
            }
            else i++;
        }
    }
};