class MyCalendar {
public:
    set<pair<int,int>> set;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        pair<int, int> p = {start, end};
        auto it = upper_bound(set.begin(), set.end(), p);
        if(it != set.end() && it->second < end) return false;
        set.insert({end, start});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */