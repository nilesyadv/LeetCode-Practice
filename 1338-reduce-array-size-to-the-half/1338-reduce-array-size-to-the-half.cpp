class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> map;
        for(int i = 0; i < arr.size(); i++)
            map[arr[i]]++;
        vector<int> v;
        for(auto x: map) v.push_back(x.second);
        
        sort(v.rbegin(),v.rend());
        int ans = 0, total = 0;
        for(int i = 0; i < v.size(); i++)
        {
            total += v[i];
            ans++;
            if(total >= arr.size() / 2) break;
        }
        return ans;
    }
};