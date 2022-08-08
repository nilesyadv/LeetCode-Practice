class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> seq;
        seq.push_back(nums[0]);
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > seq[seq.size()-1]){
                seq.push_back(nums[i]);
            }
            else{
                int index = lower_bound(seq.begin(), seq.end(), nums[i]) - seq.begin();
                seq[index] = nums[i];
            }
        }
        
        return seq.size();
    }
};