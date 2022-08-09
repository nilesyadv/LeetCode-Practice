class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        unordered_map<long long, long long> totalRoot, Divisor;
        
        long long ans = 0, M = 1e9 + 7;
        
        for(int i = 0; i < arr.size(); i++)
        {
            Divisor[arr[i]]++;
            for(int j = i - 1; j >= 0; j--)
            {
                if(arr[i] % arr[j] == 0 && Divisor[arr[i] / arr[j]])
                {
                    // if(arr[j] == arr[i] / arr[j])
                    //if(arr[i]==20) cout<<totalRoot[arr[i]] <<" "<<totalRoot[arr[j]]<<" "<<totalRoot[arr[i]/arr[j]]<<endl;
                    // {
                        totalRoot[arr[i]] = (totalRoot[arr[i]] % M + ((totalRoot[arr[j]] % M) * (totalRoot[arr[i] / arr[j]] % M)) % M) % M;
                    //}
                    // else
                    // {
                    //     totalRoot[arr[i]] = (totalRoot[arr[i]] % M + ((((totalRoot[arr[j]] % M) * (totalRoot[arr[j]] % M)) % M) * 2) % M) % M;
                    // }
                }
            }
            totalRoot[arr[i]]++;
            ans = ((ans % M) + (totalRoot[arr[i]] % M)) % M;
        }
        // cout<<endl;
        // for(int i = 0; i < arr.size(); i++) cout << totalRoot[arr[i]] << " ";
        // cout<<endl;
        
        return ans;
    }
};