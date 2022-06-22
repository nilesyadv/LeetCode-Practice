class Solution {
public:
    int Partition(vector<int>& nums, int k, int start, int end)
    {
        int i=start,j=end;
        int pivot=end;
        while(i<j)
        {
            while(i<j && nums[i]<=nums[pivot]) i++;
            while(i<j && nums[j]>=nums[pivot]) j--;
            swap(nums[i],nums[j]);
        }
        swap(nums[i],nums[pivot]);
        pivot=i;
        if(nums.size()-k==pivot) return nums[i];
        else if(nums.size()-k>pivot) return Partition(nums,k,pivot+1,end);
        else return Partition(nums,k,start,pivot-1);
    }
    int findKthLargest(vector<int>& nums, int k) {
        int start=0,end=nums.size()-1;
        return Partition(nums,k,start,end);
        
    }
};