class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            if(mid-1>=0 && mid+1<arr.size())
            {
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
                else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]) s=mid+1; 
                else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]) e=mid-1;
            }
            else if(mid==0)
            {
                s=mid+1;
            }
             else if(mid==arr.size()-1)
            {
                e=mid-1;
            }          
            mid=s+(e-s)/2;
        }
        return mid;
    }
};