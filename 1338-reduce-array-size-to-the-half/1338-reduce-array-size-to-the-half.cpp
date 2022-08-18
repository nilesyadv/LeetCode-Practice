class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int> v(100009,0);
        for(int i = 0; i < arr.size(); i++)
            v[arr[i]]++;
        
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