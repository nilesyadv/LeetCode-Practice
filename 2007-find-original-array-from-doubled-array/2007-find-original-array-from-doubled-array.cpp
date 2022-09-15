class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(), changed.end());
        if(changed.size()%2) return {};
        vector<int> ans;
        map<int, int> map;
        for(int i = 0; i < changed.size(); i++) map[changed[i]]++;
        bool flag = true;
        for(int i = 0; i < changed.size(); i++){
            if(map[changed[i]]){
                if(map[changed[i]*2]){
                    map[changed[i]]--;
                    map[changed[i]*2]--;
                    ans.push_back(changed[i]);
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
        if(!flag) return {};
        else return ans;
    }
};