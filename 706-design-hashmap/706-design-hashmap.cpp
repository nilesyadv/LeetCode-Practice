class MyHashMap {
public:
    vector<list<pair<int,int>>> m;
    int siz;
    MyHashMap() {
        siz=1000;
        m.resize(siz);
    }
    
    int hash(int key)
    {
        return key%siz;
    }
    
    list<pair<int,int>> :: iterator search(int key)
    {
        int i=hash(key);
        list<pair<int,int>> :: iterator it=m[i].begin();
        for(;it!=m[i].end();it++)
        {
            if(it->first==key) break;
        }
        return it; 
    }
    void put(int key, int value) {
        remove(key);
        int i=hash(key);
        m[i].push_back({key,value});
    }
    
    int get(int key) {
        list<pair<int,int>> :: iterator it=search(key);
        int i=hash(key);
        if(it!=m[i].end()) return it->second;
        return -1;
    }
    
    void remove(int key) {
        list<pair<int,int>> :: iterator it=search(key);
        int i=hash(key);
        if(it!=m[i].end()) m[i].erase(it);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */