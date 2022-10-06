class TimeMap {
public:
    TimeMap() {
        
    }
    map<string,vector<pair<int, string>>> m1;
    map<string, vector<int>> m2;
    
    void set(string key, string value, int timestamp) {
        m1[key].push_back({timestamp, value});
        m2[key].push_back(timestamp);
    }
    
    string get(string key, int timestamp) {
        int low1 = lower_bound(m2[key].begin(), m2[key].end(), timestamp) - m2[key].begin();
        if(m2[key].size() == 0) return "";
        else if(low1 == m2[key].size()){ 
            return m1[key][m1[key].size() - 1].second;
        }
        else{
            if(m2[key][low1] == timestamp) return m1[key][low1].second;
            else{
                if(low1 - 1 < 0) return "";
                else return m1[key][low1 - 1].second;
            }
        }
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */