class MyHashSet {
public:
    vector<list<int>> v;
    MyHashSet() {
        v.resize(100);
    }
    int hash(int key)
    {
        return key%100;
    }
    
    list<int> :: iterator search(int key)
    {
        int i=hash(key);
        return find(v[i].begin(),v[i].end(),key);
    }
    
    void add(int key) {
        if(contains(key)) return;
        int i=hash(key);
        v[i].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key)) return;
         int i=hash(key);
         v[i].erase(search(key));
    }
    
    bool contains(int key) {
        int i=hash(key);
        if(search(key)!=v[i].end()) return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */