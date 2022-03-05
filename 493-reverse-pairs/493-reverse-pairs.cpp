class Solution {
    int merge(vector<int>& nums,int left,int mid,int right)
    {
        int cnt=0,j=mid+1,i=left;
        for(;i<=mid;i++)
        {
            while(j<=right && nums[i]>2LL*nums[j]) j++;
            cnt+=(j-(mid+1));
        }
        
        vector<int> temp;
        i=left;
        j=mid+1;
        while(i<=mid && j<=right) 
        {
            if(nums[i]<=nums[j]) temp.push_back(nums[i++]);
            else temp.push_back(nums[j++]);
        }
        
        while(i<=mid) temp.push_back(nums[i++]);
        while(j<=right) temp.push_back(nums[j++]);
        
        for(int i=left;i<=right;i++) nums[i]=temp[i-left];
        return cnt;
    }
    
    int mergeSort(vector<int>& nums,int left,int right)
    {
        if(left>=right) return 0;
        int inversion=0;
        int mid=left+(right-left)/2;
        
        inversion+=mergeSort(nums,left,mid);
        inversion+=mergeSort(nums,mid+1,right);
        inversion+=merge(nums,left,mid,right);
        return inversion;
    }
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};