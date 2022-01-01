class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       
        int start=0,end=nums.size()-1;
        int mid=start+(end-start)/2;
        int fo=-1,lo=-1;
    
        vector<int>v;
        while(start<=end)
        {
            if(nums[mid]>target)
            {
                end=mid-1;             
            }
            else if(nums[mid]<target)
            {
                start=mid+1;               
            }
            else
            {
                fo=mid;
                end=mid-1;             
            }
             mid=start+(end-start)/2;
        }
      
        end=nums.size()-1;
        mid=start+(end-start)/2;
        while(start<=end)
        {
            if(nums[mid]>target)
            {
                end=mid-1;                
            }
            else if(nums[mid]<target)
            {
                start=mid+1;             
            }
            else
            {
                lo=mid;
                start=mid+1;
            }
              mid=start+(end-start)/2;
        }
        
        v.push_back(fo);
        v.push_back(lo);     
        return v;
    }
};