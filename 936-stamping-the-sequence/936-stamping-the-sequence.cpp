class Solution {
public:
    bool isMatching(string &stamp, string &t, int &ind){
        int allStar = 1;
        for(int i = 0; i< stamp.size() ; ++i ){
            if(stamp[i] != t[ind +  i] && t[ind + i] != '*') return false;
            if(t[ind+i] != '*') allStar = 0;
        }
        if(allStar) return false;
        return true;
    }
    
    vector<int> movesToStamp(string stamp, string target) {
        vector<int> ans;
        int flag = 1, c = 0, n = target.size()-stamp.size();
        while(flag && c < target.size()){
            flag = 0; 
            for(int i = 0; i <= n; ++i){
                if( isMatching(stamp, target, i)){
                    flag = 1;
                    ans.push_back(i);
                    for(int j = 0; j < stamp.size(); ++j){ //set all char to '*'
                        if(target[i+j] != '*') { target[i+j] = '*'; c++; }
                    }
                }
            }
        }
        //check if all the char in target are set to '*' or not
        string s(target.size(), '*'); 
        if(target != s) return {};
        
        reverse(ans.begin(), ans.end());
        return ans;   
    }
};