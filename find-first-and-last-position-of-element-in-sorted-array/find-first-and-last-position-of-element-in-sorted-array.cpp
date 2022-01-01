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
                mid=start+(end-start)/2;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
                mid=start+(end-start)/2;
            }
            else
            {
                fo=mid;
                end=mid-1;
                mid=start+(end-start)/2;
            }
        }
      
        end=nums.size()-1;
        mid=start+(end-start)/2;
        while(start<=end)
        {
            if(nums[mid]>target)
            {
                end=mid-1;
                mid=start+(end-start)/2;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
                mid=start+(end-start)/2;
            }
            else
            {
                lo=mid;
                start=mid+1;
                mid=start+(end-start)/2;
            }
        }
        
        v.push_back(fo);
        v.push_back(lo);
        //return v;
    
        
//         if(fo<nums.size() && nums[fo]==target) v.push_back(fo);
//         else v.push_back(-1);
        
//         if((lo-1)<nums.size() && nums[lo-1]==target) v.push_back(lo-1);
//         else v.push_back(-1);
        
        return v;
    }
};