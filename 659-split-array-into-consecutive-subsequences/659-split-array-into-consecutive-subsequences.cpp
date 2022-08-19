class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int, int> Availiable, Vacancy;
        for(int i = 0; i < nums.size(); i++) Availiable[nums[i]]++;
        for(int i = 0; i < nums.size(); i++)
        {
            if(Availiable[nums[i]])
            {
                if(Vacancy[nums[i]])
                {
                    Vacancy[nums[i]]--;
                    Availiable[nums[i]]--;
                    Vacancy[nums[i] + 1]++;
                }
                else
                {
                    if(Availiable[nums[i] + 1] && Availiable[nums[i] + 2])
                    {
                        Availiable[nums[i]]--;
                        Availiable[nums[i] + 1]--;
                        Availiable[nums[i] + 2]--;
                        Vacancy[nums[i] + 3]++;
                    }
                    else return false;
                }
            }
        }
        return true;
    }
};