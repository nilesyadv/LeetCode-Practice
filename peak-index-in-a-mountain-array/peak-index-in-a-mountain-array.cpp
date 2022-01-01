class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<e)
        {
           if(arr[mid]>arr[mid+1]) e=mid;
           else s=mid+1; 
           mid=s+(e-s)/2;
        }
        return mid;
    }
};