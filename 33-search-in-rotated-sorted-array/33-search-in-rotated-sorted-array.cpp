class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int sz = nums.size();
        if (nums[sz - 1] > nums[0])
        {
            int s = 0, e = sz - 1;
            int mid = s + (e - s) / 2;
            while (s < e)
            {
                if (nums[mid] == target)
                    return mid;
                if (nums[mid] > target)
                    e = mid - 1;
                else
                    s = mid + 1;
                mid = s + (e - s) / 2;
            }
            if (nums[s] == target)
                return s;
            else
                return -1;
        }
        else
        {
            int s = 0, e = sz - 1;
            int mid = s + (e - s) / 2;
            while (s < e)
            {
                if (nums[mid] >= nums[0])
                    s = mid + 1;
                else
                    e = mid;
                mid = s + (e - s) / 2;
            }
            if (target >= nums[0])
            {
                s = 0, e = mid - 1, mid = s + (e - s) / 2;
                while (s < e)
                {
                    if (nums[mid] == target)
                        return mid;
                    if (nums[mid] > target)
                        e = mid - 1;
                    else
                        s = mid + 1;
                    mid = s + (e - s) / 2;
                }
                if (nums[s] == target)
                    return s;
                else
                    return -1;
            }
            else
            {
                s = mid, e = sz - 1, mid = s + (e - s) / 2;
                while (s < e)
                {
                    if (nums[mid] == target)
                        return mid;
                    if (nums[mid] > target)
                        e = mid - 1;
                    else
                        s = mid + 1;
                    mid = s + (e - s) / 2;
                }
                if (nums[s] == target)
                    return s;
                else
                    return -1;
            }
        }
    }
};