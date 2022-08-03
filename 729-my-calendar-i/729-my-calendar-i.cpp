class MyCalendar {
public:
    vector<pair<int,int>> v;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        int low = start, high = end - 1;
        bool flag = true;
        for(int i = 0; i < v.size(); i++)
        {
            if(!(low > v[i].second || high < v[i].first))
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            v.push_back({low, high});
            return flag;
        }
        
        return flag;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */