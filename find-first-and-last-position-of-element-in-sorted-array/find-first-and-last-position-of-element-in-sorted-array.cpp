class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       
        int start=0,end=nums.size()-1;
        int mid=start+(end-start)/2;
        float f=target-0.5,l=target+0.5;
        int fo=0,lo=nums.size();
        vector<int>v;
       
        while(start<=end)
        {
            if(nums[mid]>f)
            {
                end=mid-1;
                mid=start+(end-start)/2;
            }
            else 
            {
                start=mid+1;
                mid=start+(end-start)/2;
            }
        }
        fo=mid;
        
        start=0,end=nums.size()-1;
        mid=start+(end-start)/2;
        while(start<=end)
        {
            if(nums[mid]>l)
            {
                end=mid-1;
                mid=start+(end-start)/2;
            }
            else 
            {
                start=mid+1;
                mid=start+(end-start)/2;
            }
        }
        lo=mid;
        
        if(fo<nums.size() && nums[fo]==target) v.push_back(fo);
        else v.push_back(-1);
        
        if((lo-1)<nums.size() && nums[lo-1]==target) v.push_back(lo-1);
        else v.push_back(-1);
        
        return v;
    }
};