class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        
        vector<int>v;
        bool flag=true;
        for(auto i: m)
        {
            v.push_back(i.second);
        }
        
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==v[i-1])
            {
                flag=false;
                break;
            }
        }
     return flag;
    }
    
};