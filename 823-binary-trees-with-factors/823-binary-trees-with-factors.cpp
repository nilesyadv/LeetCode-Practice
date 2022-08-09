class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        unordered_map<int, long long> totalRoot;
        
        long long ans = 0, M = 1e9 + 7;
        
        for(int i = 0; i < arr.size(); i++)
        {
            for(int j = i - 1; j >= 0; j--)
            {
                if(arr[i] % arr[j] == 0)
                    totalRoot[arr[i]] = (totalRoot[arr[i]] % M + ((totalRoot[arr[j]] % M) * (totalRoot[arr[i] / arr[j]] % M)) % M) % M;
            }
            totalRoot[arr[i]]++;
            ans = ((ans % M) + (totalRoot[arr[i]] % M)) % M;
        }
        
        return ans;
    }
};